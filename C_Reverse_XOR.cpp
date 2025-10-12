#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n % 2 == 1) {
            cout << "YES\n";
            continue;
        }
        
        bool found = false;
        for (int k = 1; (1 << k) <= n; k++) {
            if (n % (1 << k) != 0) continue;
            int val = n / (1 << k);
            if (val % 2 == 1) {
                found = true;
                break;
            }
        }
        
        cout << (found ? "YES" : "NO") << "\n";
    }
    
    return 0;
}