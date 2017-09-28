package lift;
public class Lift extends Thread {
	LiftView lv;
	Monitor monitor;
	
	public Lift(Monitor monitor,LiftView lv) {
		super();
		this.lv = lv;
		this.monitor = monitor;
	}
		
	public void run() {
		while(true) {
			
				monitor.hasPassengerLeft(lv);
				monitor.hasPassengerEntered(lv);
				monitor.incNext();
				int[] v = monitor.elevatorTo(lv);
				lv.moveLift(v[0], v[1]);
				monitor.incHere();
				
	}
}}