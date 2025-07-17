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

void asikM() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, pi>> v(n);
    for (auto& x : v)  cin >> x.first >> x.second.first >> x.second.second;
    vector<bool> visited(n, false);
    bool f = true;
    while (f) {
        f = false;
        ll bi = -1;
        ll br = k;
        forni{
            if (visited[i]) continue;
            ll l = v[i].first;
            ll r = v[i].second.first;
            ll x = v[i].second.second;
            if (l <= k && k <= r) {
                if (x > br) {
                    br = x;
                    bi = i;
                }
            }
        }
        if (bi != -1) {
            k = br;
            visited[bi] = true;
            f = true;
        }
    }
    co(k)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
        asikM();
    return 0;
}
