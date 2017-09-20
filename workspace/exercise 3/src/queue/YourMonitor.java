package queue;

import se.lth.cs.realtime.RTError;

class YourMonitor {
	private int nCounters;
	private int currentLineNumber=1;
	private boolean[] counters;
	private int startLine=0;
	DispData disp;
	//endLine = currentLineNumber-1;
	//size of line = currentLineNumber - startLine

	YourMonitor(int n) { 
		nCounters = n;
		counters = new boolean[n];
		for(int i = 0; i < counters.length; i++) {
		    counters[i] = true;
		}
	}

	/**
	 * Return the next queue number in the intervall 0...99. 
	 * There is never more than 100 customers waiting.
	 */
	synchronized int customerArrived() {
		int tempNumber = currentLineNumber;
		if(++currentLineNumber>99) 
			currentLineNumber = 0;
		notifyAll();
		return tempNumber;
	}

	/**
	 * Register the clerk at counter id as free. Send a customer if any. 
	 */
	synchronized void clerkFree(int id) { 
		counters[id] = true;
		notifyAll();
	}
	
	private int firstFreeClerk() {
		for(int i = 0 ; i< counters.length ; i++ ) {
			if(counters[i] = true) {
				return i;
			}
		}
		return -1;
	}

	/**
	 * Wait for there to be a free clerk and a waiting customer, then
	 * return the queue number of next customer to serve and the counter 
	 * number of the engaged clerk.
	 */
	synchronized DispData getDisplayData() throws InterruptedException {
		try {
			while(firstFreeClerk() == -1 || (currentLineNumber - startLine) < 1)
				wait();
		} catch (InterruptedException exc) {
			throw new RTError("YourMonitor.clerkFree interrupted: " + exc);
		}
		int a = firstFreeClerk();
		counters[a] = false;
		disp.counter = a;
		disp.ticket = startLine;
		if(++startLine >99)
			startLine = 0;
		
		return (disp);
	}
}
