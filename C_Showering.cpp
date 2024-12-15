#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,s,m,c=0;
        cin >> n>>s>>m;
        vector<pair<ll,ll>> v;
        bool f = false;
        v.pb({0,0});
        for(int i=0;i<n;i++)
        {
            ll l,r;
            cin>>l>>r;
            v.pb({l,r});
        }
        v.pb({m,m});
        sort(v.begin(),v.end());
        for(int i=1;i<n+2;i++)
        {
            if(v[i].first-v[i-1].second>=s)
            {
                f = true;
                break;
            }
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}