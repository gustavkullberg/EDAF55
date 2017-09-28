package lift;

import java.util.Random;

public class Passenger extends Thread {
	Random rand;
	Monitor monitor;
	LiftView lv;
	public Passenger(Monitor monitor, LiftView lv) {
		this.monitor = monitor;
		this.lv = lv;
	}
	
	public void run() {
		rand = new Random();
		int start;
		int dest;
		
		while(true) {
			start = rand.nextInt(7);
			dest = start;
			while(dest==start) {
				dest =rand.nextInt(7);
			}
			monitor.addPassenger(lv, start);
			monitor.canIEnter(lv, start, dest);
			monitor.canILeave(lv, dest);
			

			try {
					Thread.sleep(60000);
			} catch (InterruptedException exc) {	}
		
		}
	}
}