#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

ll countValidWays(int n, int m, vector<int>& a) {
    sort(a.begin(), a.end());
    ll total = 0;
    for (int k = 1; k < n; ++k){
        int left = k;
        int right = n - k;
        int max_val = max(left, right);
        int cnt1 = a.end() - lower_bound(a.begin(), a.end(), left);
        int cnt2 = a.end() - lower_bound(a.begin(), a.end(), right);
        int same = a.end() - lower_bound(a.begin(), a.end(), max_val);
        total += (ll)cnt1 * cnt2 - same;
    }
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        cout << countValidWays(n, m, a) << "\n";
    }
    return 0;
}