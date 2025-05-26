#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int z = count(s.begin(), s.end(), '0');
    int o = n - z;
    int tp = n / 2;

    for (int x = 0; x <= k; ++x) {
        int zn = 2 * x;
        int on = 2 * (k - x);
        int z_left = z - zn;
        int o_left = o - on;

        if (zn <= z && on <= o) {
            int mm = tp - k;
            if (min(z_left, o_left) >= mm) {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
