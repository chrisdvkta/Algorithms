#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Process
{
    int id;
    int burstTime;
};

bool compareBurstTime(Process a, Process b)
{
    return a.burstTime < b.burstTime;
}

int main()
{
    vector<Process> processes = {
        {1, 4},
        {2, 3},
        {3, 2},
        {4, 1}};

    sort(processes.begin(), processes.end(), compareBurstTime);

    int currentTime = 0;

    cout << "Order of execution:\n";

    for (const Process &p : processes)
    {
        cout << "Process ID: " << p.id
             << ", Burst Time: " << p.burstTime
             << ", Start Time: " << currentTime
             << ", End Time: " << (currentTime + p.burstTime)
             << std::endl;

        currentTime += p.burstTime;
    }
    return 0;
}
