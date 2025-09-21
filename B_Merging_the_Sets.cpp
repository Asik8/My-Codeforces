#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n, m; // n = number of sets, m = max integer
        cin >> n >> m;
        vector<vector<int>> sets(n);
        vector<vector<int>> elem_to_sets(m + 1); // 1-based

        // Reading the sets
        for(int i = 0; i < n; i++) {
            int sz;
            cin >> sz;
            sets[i].resize(sz);
            for(int j = 0; j < sz; j++) {
                cin >> sets[i][j];
                elem_to_sets[sets[i][j]].push_back(i);
            }
        }

        // Check if every element from 1 to m is contained in at least 3 sets
        bool possible = true;
        for(int x = 1; x <= m; x++) {
            if((int)elem_to_sets[x].size() < 3) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
