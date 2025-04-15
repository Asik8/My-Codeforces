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

void asikM(){
    ll n;
    cin >> n;
    vector<ll> a(n), b(n),g(n), h(n),fin(n, -1),ai(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];
    for (ll i = 0; i < n; ++i) cin >> b[i];
    for (ll i = 0; i < n; ++i){
        a[i]--;
        b[i]--;
        g[a[i]] = b[i];
        h[b[i]] = a[i];
    }
    for (ll i = 0; i < n; ++i) {
        if (g[g[i]] != i) {
            cout << -1 << '\n';
            return;
        }
    }
    ll cnt = 0;
    for (ll i = 0; i < n; ++i) ai[a[i]] = i;
    ll fixed_count = 0;
    for (ll i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            fixed_count++;
        }
    }
    if (fixed_count > n % 2) {
        cout << -1 << '\n';
        return;
    }
    if (n % 2 == 1) {
        bool placed = false;
        for (ll i = 0; i < n; ++i) {
            if (a[i] == b[i]) {
                fin[i] = n / 2;
                placed = true;
                break;
            }
        }
        if (!placed) {
            cout << -1 << '\n';
            return;
        }
    }
    for (ll i = 0; i < n; ++i) {
        if (fin[i] == -1) {
            fin[i] = cnt++;
            fin[ai[g[a[i]]]] = n - cnt;
            if ((n % 2 == 1) && cnt == n / 2){
                cnt++;
            }
        }
    }
    vector<ll> fi(n);
    for (ll i = 0; i < n; ++i) fi[fin[i]] = i;
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i < n; ++i) {
        ll idx = fi[i];
        if (i != idx) {
            swap(fin[i], fin[idx]);
            fi[fin[i]] = i;
            fi[fin[idx]] = idx;
            ans.push_back({i, idx});
        }
    }
    cout << ans.size() << '\n';
    for (auto &p : ans) cout << p.first + 1 << " " << p.second + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}
