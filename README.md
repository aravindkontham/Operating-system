# Operating-system
# Round Robin Algorithm:<hr>

Round Robin is a CPU scheduling algorithm that is used to allocate CPU time among processes in a system. In this algorithm, each process is given a fixed time period called a time quantum or time slice, and the CPU switches between processes in a circular fashion after each time quantum expires.<br>

# Working of Round Robin Algorithm:<hr>

The working of the Round Robin algorithm can be explained in the following steps:<br>

All processes are initially added to a queue.<br>
The first process in the queue is given a time quantum and allowed to run for that period.<br>
If the process completes execution within the given time quantum, it is removed from the queue.<br>
If the process does not complete execution within the given time quantum, it is preempted and added to the end of the queue.<br>
The next process in the queue is then given a time quantum to execute and the process is repeated until all processes complete execution.<br>

# Advantages of Round Robin Algorithm:<hr>

Fairness: The Round Robin algorithm ensures that every process gets an equal share of CPU time.<br>
Response Time: The response time for short processes is generally low in Round Robin scheduling.<br>
Preemptive: The Round Robin algorithm is a preemptive algorithm, which means that long-running processes can be interrupted to give other processes a chance to execute.


# Disadvantages of Round Robin Algorithm:<hr>

Overhead: The Round Robin algorithm involves a lot of context switching, which can increase overhead and reduce performance.<br>
Poor Performance: The Round Robin algorithm may result in poor performance for long-running processes as they have to wait for the next time quantum to execute.<br>
Time Quantum: The performance of the Round Robin algorithm is highly dependent on the time quantum, and selecting an appropriate time quantum is crucial for optimal performance.<br>
