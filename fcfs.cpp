#include <iostream>
#include <queue>

using namespace std;

struct Process
{
    int id;
    int burstTime;
};

int main()
{
    queue<Process> processQueue;

    Process p1 = {1, 4};
    Process p2 = {2, 3};
    Process p3 = {3, 2};
    Process p4 = {4, 1};

    processQueue.push(p1);
    processQueue.push(p2);
    processQueue.push(p3);
    processQueue.push(p4);

    int currentTime = 0;
    cout << "Order of execution:\n";

    while (!processQueue.empty())
    {
        Process currentProcess = processQueue.front();
        processQueue.pop();

        cout << "Process ID: " << currentProcess.id
             << ", Burst Time: " << currentProcess.burstTime
             << ", Start Time: " << currentTime
             << ", End Time: " << (currentTime + currentProcess.burstTime)
             << std::endl;

        currentTime += currentProcess.burstTime;
    }
    return 0;
}