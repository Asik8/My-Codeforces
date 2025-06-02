#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec(x) vector<x>
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";

void asikM() {
    ll n, k, x;
    cin >> n >> k >> x;
    vector<bool> dp(n + 1, false);
    vector<int> from(n + 1, -1);
    dp[0] = true;
    vector<int> nums;
    for (int i = 1; i <= k; i++) {
        if (i != x) nums.push_back(i);
    }
    for (int coin : nums) {
        for (int i = coin; i <= n; i++) {
            if (!dp[i] && dp[i - coin]) {
                dp[i] = true;
                from[i] = coin;
            }
        }
    }
    if (!dp[n]) {
        pn
        return;
    }
    py
    vec(int) ans;
    int cur = n;
    while (cur > 0) {
        ans.push_back(from[cur]);
        cur -= from[cur];
    }
    co(ans.size())
    for (int val : ans) ct(val)
    elc
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        asikM();
    return 0;
}
