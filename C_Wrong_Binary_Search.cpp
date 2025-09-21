#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> stable, non_stable;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            stable.push_back(i + 1);
        } else {
            non_stable.push_back(i + 1);
        }
    }

    if (stable.size() > (n + 1) / 2) {
        cout << "NO\n";
        return;
    }

    vector<int> permutation(n);
    int idx = 0;

    // Place stable elements in the first half
    for (int i = 0; i < stable.size(); ++i) {
        permutation[idx++] = stable[i];
    }

    // Place non-stable elements in the remaining positions
    for (int i = 0; i < non_stable.size(); ++i) {
        permutation[idx++] = non_stable[i];
    }

    cout << "YES\n";
    for (int i = 0; i < n; ++i) {
        cout << permutation[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
