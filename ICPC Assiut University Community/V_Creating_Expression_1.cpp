#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, x, s = 0;
    cin >> n >> x;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    int msum = 2 * s + 1;
    bool dp[n + 1][msum];
    memset(dp, false, sizeof(dp));
    dp[0][s] = true; 
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < msum; j++) {
            if (dp[i - 1][j]) {
                dp[i][j + a[i - 1]] = true;
                dp[i][j - a[i - 1]] = true;
            }
        }
    }

    if (x + s >= 0 && x + s < msum && dp[n][x + s]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
