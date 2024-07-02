#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Process
{
    int id;
    int arrivalTime;
    int burstTime;
};

bool compareArrivalTime(Process a, Process b)
{
    return a.arrivalTime < b.arrivalTime;
}

int main()
{
    vector<Process> processes = {
        {1, 0, 4},
        {2, 1, 3},
        {3, 2, 2},
        {4, 3, 1}};

    std::sort(processes.begin(), processes.end(), compareArrivalTime);

    int currentTime = 0;
    int completed = 0;
    int n = processes.size();
    vector<bool> isCompleted(n, false);

    cout << "Order of execution";

    while (completed != n)
    {
        int idx = -1;
        int minBurstTime = INT_FAST16_MAX;

        for (int i = 0; i < n; i++)
        {
            if (processes[i].arrivalTime <= currentTime && !isCompleted[i] && processes[i].burstTime < minBurstTime)
            {
                minBurstTime = processes[i].burstTime;
                idx = i;
            }
        }

        if (idx != -1)
        {
            cout << "Process ID: " << processes[idx].id
                 << ", Arrival Time: " << processes[idx].arrivalTime
                 << ", Burst Time: " << processes[idx].burstTime
                 << ", Start Time: " << currentTime
                 << ", End Time: " << (currentTime + processes[idx].burstTime)
                 << std::endl;

            currentTime += processes[idx].burstTime;
            isCompleted[idx] = true;
            completed++;
        }
        else
        {
            currentTime++;
        }
    }
    return 0;
}