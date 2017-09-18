package todo;

import done.*;
import se.lth.cs.realtime.semaphore.CountingSem;
import se.lth.cs.realtime.semaphore.MutexSem;
import se.lth.cs.realtime.semaphore.Semaphore;

/**
 * Main class of alarm-clock application. Constructor providing access to IO.
 * Method start corresponding to main, with closing down done in terminate.
 */
public class AlarmClock {

	private ClockInput input;
	private ClockOutput output;
	private Semaphore signal;
	private Semaphore alarmOnOff;
	Time time;
	UserInput userInput;
	
	Thread timeThread; 
	Thread userInputThread;
	static boolean alarmFlag;
	static int ssssss;
	// Declare thread objects here..

	/**
	 * Create main application and bind attributes to device drivers.
	 * 
	 * @param i
	 *            The input from simulator/emulator/hardware.
	 * @param o
	 *            Dito for output.
	 */
	public AlarmClock(ClockInput i, ClockOutput o) {
		input = i;
		output = o;
		signal = input.getSemaphoreInstance();
	}

	/**
	 * Tell threads to terminate and wait until they are dead.
	 */
	public void terminate() {
		// Do something more clever here...
		output.console("AlarmClock exit.");
	}

	/**
	 * Create thread objects, and start threads
	 */
	public void start() {
		ssssss = (int) (System.currentTimeMillis()/1000+3600*2);
		alarmFlag = false;
		alarmOnOff = new CountingSem(1);
		time = new Time(ssssss, userInput, alarmFlag, alarmOnOff);
		userInput = new UserInput(time, alarmFlag, alarmOnOff);
		timeThread = new Thread(time);
		userInputThread = new Thread(userInput);
		
		
		timeThread.start();
		userInputThread.start();
	}

	class UserInput implements Runnable{
		int prevState = 0;
		int newState;
		Time time;
		
		UserInput(Time time, boolean alarmFlag, Semaphore alarmOnOff){
			super();
			this.time  = time;
		}

		@Override
		public void run() {
			while(!Thread.currentThread().isInterrupted()) {
				//try {
					if(signal.tryTake(100)==true) {
					newState = input.getChoice();
					alarmFlag = input.getAlarmFlag();
					
					if(newState != prevState) {
						if(prevState == input.SET_TIME)
							time.setTime(input.getValue());
						if(prevState == input.SET_ALARM)
							time.setAlarm(input.getValue());
					}
					prevState = newState;}
					
					if(alarmOnOff.tryTake(1)==true) {
						ringAlarm();
						alarmOnOff.give();
						time.takeAlarmOnOff();
					} 
			}
		}
		
		public void ringAlarm() {
			long t1, t2 = System.currentTimeMillis();
			t1=t2;
			boolean anyButtonPressed = false;
			while(t1-t2 < 20000 && anyButtonPressed == false) {
				output.doAlarm();
				t1 = System.currentTimeMillis();
				alarmFlag = input.getAlarmFlag();
				anyButtonPressed = signal.tryTake(100);
			}
			
			
		}
		
	}

	class Time implements Runnable {
		int alarmTime;
		Semaphore mutex;
		

		Time(int ssssss, UserInput userInput, boolean alarmFlag, Semaphore alarmOnOff) {
			super();
			alarmTime = 0;
			alarmOnOff.take();
		}

		@Override
		public void run() {
			long t, diff;
			t = System.currentTimeMillis();

			while (true) {
				t += 1000;
				diff = t - System.currentTimeMillis();
				if (diff > 0)
					try {
						Thread.sleep(diff);
						incTime();
					} catch (InterruptedException e) {
						e.printStackTrace();
					}
			}
		}
		public void setTime(int hhmmss) {
			ssssss = secondify(hhmmss);
		}
		public void setAlarm(int hhmmss) {
			alarmTime = hhmmss;
		}
		public void takeAlarmOnOff() {
			alarmOnOff.take();
		}
		public void incTime() {
			++ssssss;
			output.showTime(toHHMMSS(ssssss));
			if(toHHMMSS(ssssss) == alarmTime && alarmFlag == true) {
				alarmOnOff.give();
			}
		}
		public int toHHMMSS(int secs) {
			int hours = (secs / 3600) % 24;
			int mins = ((secs - hours * 3600) / 60) % 60;
			return hours * 10000 + mins * 100 + secs % 60;
		}
		public int secondify(int HHMMSS) {
			int hourPart=(HHMMSS/10000);
			int minutePart = (HHMMSS/100-100*hourPart);
			int secPart = (HHMMSS-10000*hourPart-100*minutePart);
			return hourPart*3600+minutePart*60+secPart;
		}

	}
}









//class InputOutputTest implements Runnable {
//	public void run() {
//		long curr;
//		int time, mode;
//		boolean flag;
//		output.console("Click on GUI to obtain key presses!");
//		while (!Thread.currentThread().isInterrupted()) {
//			curr = System.currentTimeMillis();
//			time = input.getValue();
//			flag = input.getAlarmFlag();
//			mode = input.getChoice();
//			output.doAlarm();
//			output.console(curr, time, flag, mode);
//			if (time == 120000)
//				break; // Swe: Bryter for middag
//			signal.take();
//		}
//		output.console("IO-test terminated #");
//	}
//
//}
