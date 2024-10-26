#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Process
{

    int id;
    int burstTime;
    int remainingTime;
    int waitingTime;
    int turnAroundTime;
};

// void roundRobinScheduling()
// {
// }

void roundRobinScheduling(vector<Process> &processses, int quantumTime)
{
    queue<Process *> readyQueue;
    int currentTime = 0;

    for (auto &process : processses)
    {
        readyQueue.push(&process);
    }
    while (!readyQueue.empty())
    {
        Process *currentProcess = readyQueue.front();
        readyQueue.pop();
        if (currentProcess->remainingTime <= quantumTime)
        {
            currentTime += currentProcess->remainingTime;
            currentProcess->remainingTime = 0;
            currentProcess->turnAroundTime = currentTime;
            currentProcess->waitingTime = currentTime - currentProcess->burstTime;
        }
        else
        {
            currentTime += quantumTime;
            currentProcess->remainingTime -= quantumTime;
            readyQueue.push(currentProcess); // Add the process back to the queue
        }
    }
};

int main()
{
    vector<Process> processes = {
        {1, 10, 10, 0, 0},
        {2, 5, 5, 0, 0},
        {3, 8, 8, 0, 0},
        {4, 6, 6, 0, 0}};

    int timeQuantum = 4;

    roundRobinScheduling(processes, timeQuantum);
}