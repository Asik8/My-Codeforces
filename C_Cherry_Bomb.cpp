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
    ll n,k;
    cin >> n>>k;
    vec(ll) v1(n),v2(n);
    for (auto& x:v1) cin >>x; 
    for (auto& x:v2) cin >>x; 
    ll cnt = 0;
    set<ll> st;
    fl(i, 0, n) {
        if (v2[i] != -1) st.pbs(v1[i]+v2[i]);
        else cnt++;
    }
    if (cnt == n) {
        ll mx = *max_element(all(v1));
        ll mn = LLONG_MAX;
        for (auto x : v1) mn = min(mn, x+k);
        if (mx > mn) {
            co(0);
            return;
        } 
        co(max(0LL, mn - mx + 1));
        return;
    }
    if (sz(st) != 1) {
        co(0);
        return;
    }
    ll total = *st.begin();
    bool ok = true;
    fl(i, 0, n) {
        if (v2[i] == -1) {
            ll val = total - v1[i];
            if (val < 0 || val > k) {
                ok = false;
                break;
            }
        }
    }
    cout << (ok ? "1\n" : "0\n");
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
