package lift;

import java.util.ArrayList;

public class Monitor {
	int here = 0;
	int next = 0;
	int prenext = 0;
	int load;
	int[] waitEntry = { 0, 0, 0, 0, 0, 0, 0 };
	int[] waitExit = { 0, 0, 0, 0, 0, 0, 0 };
	boolean entryCheck;

	public Monitor() {
	}

	public synchronized void incNext() {
		try {
			while(!entryCheck && load == 0)
				wait();
		}catch (InterruptedException e) {
		}
		
		if (prenext < next) {
			prenext = next;
			while(true) {
				++next;
				if(next > 6) {
					next = here - 1;
					while(next > -1) {
						if(waitExit[next] != 0)
							break;
						if(waitEntry[next]!=0 && load <4)
							break;
						--next;
					}
					if(next == -1) {
						next=0;	
					}
					break;
				}
				if(waitExit[next] != 0)
					break;
				if(waitEntry[next]!=0 && load <4)
					break;
			}
		} 
		
		
		
		else if(prenext > next) {
			prenext = next;
			while(true) {
				--next;
				if(next < 0) {
					next = here + 1;
					while(next < 7) {
						if(waitExit[next] != 0)
							break;
						if(waitEntry[next]!=0 && load <4)
							break;
						++next;
					}
					if(next == 7) {
						next = 0;
					}
					break;
				}
				if(waitExit[next] != 0)
					break;
				if(waitEntry[next]!=0 && load <4)
					break;
			}
		}else {
			prenext = next;
			++next;
		}
	}
	
	public synchronized void incHere() {
		here = next;
		notifyAll();
	}
	
	public synchronized int[] elevatorTo(LiftView lv) {
		notifyAll();
		return new int[] { here, next };
	}

	public synchronized void addPassenger(LiftView lv, int floor) {
		entryCheck = true;
		++waitEntry[floor];
		lv.drawLevel(floor, waitEntry[floor]);
		notifyAll();
	}

	public synchronized void canIEnter(LiftView lv, int start, int dest) {
		try {
			while (!(here == start && load < 4 )) {// && ((next-here > 0) == (next-dest > 0))   )
				wait();
			}
		} catch (InterruptedException e) {
		}
		++load;
		--waitEntry[here];
		++waitExit[dest];
		System.out.println("waitExit on floor " + dest + " just became " + waitExit[dest]);
		lv.drawLift(here, load);
		
		//System.out.println("Picked up a guy on floor: " + start + ", going to floor: " + dest);
		lv.drawLevel(here, waitEntry[here]);
		
		int sum =0;
		for(int i : waitEntry) {
			sum +=i;
		}
		if(sum == 0)
			entryCheck = false;
		
		notifyAll();

	}

	public synchronized void canILeave(LiftView lv, int dest) {
		try {
			while (here != dest) {
				//System.out.println("I am on floor " + here);
				wait();
			}
		} catch (InterruptedException e) {
		}
		--load;
		--waitExit[here];
		lv.drawLift(dest, load);

		notifyAll();

	}

	public synchronized void hasPassengerLeft(LiftView lv) {
		try {
			//System.out.println("waitExit on floor "+here + " is now " + waitExit[here]);
			while (waitExit[here] != 0) {
				System.out.println("Wating for ppl to leave");
				wait();
			}
		} catch (InterruptedException e) {
		}

		notifyAll();
	}

	public synchronized void hasPassengerEntered(LiftView lv) {
		try {
			while (waitEntry[here] != 0 && load != 4) {
				System.out.println("Wating for ppl to enter");
				wait();
			}
		} catch (InterruptedException e) {
		}
		notifyAll();
	}

	public static void main(String[] args) {
		LiftView lv = new LiftView();
		Monitor monitor = new Monitor();
		Lift lift = new Lift(monitor, lv);
		lift.start();
		ArrayList<Passenger> passengers = new ArrayList<Passenger>();
		for (int i = 0; i < 20; i++) {
			passengers.add(new Passenger(monitor, lv));
			passengers.get(i).start();
		}
	}
}
