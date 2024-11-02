

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 4;
    vector<int> pid = {1, 2, 3, 4},arrival = {0, 1, 2, 3},burst = {8, 4, 9, 5},remaining = burst;
    vector<int> c(n), t(n), wt(n);
    vector<bool> com(n, false);
    int currentTime = 0, comProcesses = 0; double totalTAT = 0, totalWT = 0;
    while (comProcesses < n) {
        int idx = -1;
        int minRemaining = INT_MAX;
        for (int i = 0; i < n; ++i){
            if (!com[i] && arrival[i] <= currentTime && remaining[i] < minRemaining){
                minRemaining = remaining[i]; idx = i;
            }
        }
        if (idx != -1){
            remaining[idx]--; currentTime++;
            if (remaining[idx] == 0){
                c[idx] = currentTime; t[idx] = c[idx] - arrival[idx];
                wt[idx] = t[idx] - burst[idx]; totalTAT += t[idx];
                totalWT += wt[idx]; com[idx] = true;
                comProcesses++;
            }
        } 
        else currentTime++;
    }
    double avgTAT = totalTAT / n; double avgWT = totalWT / n;
    cout << "\nPID\tArrival\tBurst\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; ++i)
        cout << pid[i] << "\t" << arrival[i] << "\t" << burst[i] << "\t"
             << c[i] << "\t" << t[i] << "\t" << wt[i] << "\n";
    cout << "Average Turnaround Time: " << avgTAT << endl;
    cout << "Average Waiting Time: " << avgWT << endl;
    return 0;
}
