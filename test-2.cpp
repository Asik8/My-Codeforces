#include <bits/stdc++.h>
using namespace std;
int main() {
    struct Process {
        int id;
        int burstTime;
        int arrivalTime;
    };
    vector<Process> p = {
        {1, 5, 0},
        {2, 4, 1},
        {3, 2, 2},
        {4, 1, 4}
    };
    int n = p.size(),remainingTime[n];vector<int> wt(n, 0), tat(n, 0), ct(n), rt(n); for (int i = 0; i < n; i++) remainingTime[i] = p[i].burstTime;
    int currentTime = 0, tq = 2;
    while (true) {
        bool done = true;
        for (int i = 0; i < n; i++) {
            if (remainingTime[i] > 0 && p[i].arrivalTime <= currentTime) {
                done = false;
                if (remainingTime[i] > tq) {
                    currentTime += tq; remainingTime[i] -= tq;
                }
                else{
                    currentTime += remainingTime[i]; ct[i] = currentTime;
                    tat[i] = ct[i] - p[i].arrivalTime; wt[i] = tat[i] - p[i].burstTime; remainingTime[i] = 0;
                }
            }
        }
        if (done) break;
    }
    double totalTAT = 0, totalWT = 0;
    cout << "\nRound Robin Scheduling:\n";
    cout << "Process ID\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) {
        cout << p[i].id << "\t\t" << ct[i] << "\t" 
             << tat[i] << "\t" << wt[i] << endl;
        totalTAT += tat[i];
        totalWT += wt[i];
    }
    cout << "Average TAT: " << totalTAT / n << endl;
    cout << "Average WT: " << totalWT / n << endl;
    return 0;
}
