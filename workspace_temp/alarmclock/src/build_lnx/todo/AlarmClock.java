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
	private Semaphore mutex;
	Time time;
	UserInput userInput;

	Thread timeThread;
	Thread userInputThread;

	private boolean alarmFlag;
	private int ssssss;
	private int alarmTime = -1;
	private int alarmCounter;
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
		//output.console("AlarmClock exit.");
	}

	/**
	 * Create thread objects, and start threads
	 */
	public void start() {
		ssssss = (int) (System.currentTimeMillis() / 1000 + 3600 * 2);
		alarmFlag = false;
		alarmCounter = 0;
		mutex = new MutexSem();
		time = new Time(ssssss, userInput);
		userInput = new UserInput(time);
		timeThread = new Thread(time);
		userInputThread = new Thread(userInput);

		timeThread.start();
		userInputThread.start();
	}

	public void setTime(int hhmmss) {
		mutex.take();
		ssssss = secondify(hhmmss);
		mutex.give();
	}

	public void setAlarm(int hhmmss) {
		mutex.take();
		alarmTime = hhmmss;
		mutex.give();
	}

	public void incTime() {
		mutex.take();
		++ssssss;
		output.showTime(toHHMMSS(ssssss));
		
		if(toHHMMSS(ssssss) == alarmTime && alarmFlag == true) {
			alarmCounter = 20;
		}
		
		if(alarmCounter > 0) {
			output.doAlarm();
			--alarmCounter;
		}
		
		mutex.give();
	}
	public void handleAlarm(boolean alarmFlag) {
		if(alarmFlag == true)
			alarmCounter = 0; 
	}

	private int toHHMMSS(int secs) {
		int hours = (secs / 3600) % 24;
		int mins = ((secs - hours * 3600) / 60) % 60;
		return hours * 10000 + mins * 100 + secs % 60;
	}

	private int secondify(int HHMMSS) {
		int hourPart = (HHMMSS / 10000);
		int minutePart = (HHMMSS / 100 - 100 * hourPart);
		int secPart = (HHMMSS - 10000 * hourPart - 100 * minutePart);
		return hourPart * 3600 + minutePart * 60 + secPart;
	}

	class UserInput implements Runnable {
		int prevState = 0;
		int newState;
		Time time;

		UserInput(Time time) {
			super();
			this.time = time;
		}

		
		public void run() {
			while (!Thread.currentThread().isInterrupted()) {
				signal.take();			
					alarmFlag = input.getAlarmFlag();
					newState = input.getChoice();
					
					handleAlarm(alarmFlag);

					if (newState != prevState) {
						if (prevState == input.SET_TIME)
							setTime(input.getValue());
						if (prevState == input.SET_ALARM)
							setAlarm(input.getValue());
					}
					prevState = newState;
			}
		}

	}

	class Time implements Runnable {

		Time(int ssssss, UserInput userInput) {
			super();
		}

		
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
	}
}
