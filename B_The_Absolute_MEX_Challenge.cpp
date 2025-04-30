#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n + 1, 0);
    vector<bool> used(n + 1, false);
    p[n] = n;
    used[n] = true;
    vector<int> order;
    int L = 2, R = n - 1;
    bool takeRight = true;
    while (L <= R) {
        if (takeRight) {
            order.push_back(R);
            R--;
        } else {
            order.push_back(L);
            L++;
        }
        takeRight = !takeRight;
    }
    int small = 1, large = n - 1;
    for (int i = 0; i < (int)order.size(); i++) {
        if (i % 2 == 0) {
            p[order[i]] = small;
            used[small] = true;
            small++;
        } else {
            p[order[i]] = large;
            used[large] = true;
            large--;
        }
    }
    for (int num = 1; num <= n; num++) {
        if (!used[num]) {
            p[1] = num;
            break;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
