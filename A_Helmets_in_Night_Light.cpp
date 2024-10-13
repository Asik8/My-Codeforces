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
        ll n,p;
        cin>>n>>p;
        ll a[n],b[n];
        ll ans = p;
        for (int i=0;i<n;i++) cin>>a[i];       
        vector<pair<ll,ll>> v;
        for(ll i=0;i<n;i++){
            cin>>b[i];
            v.pb({min(b[i],p),a[i]});
        }
        sort(v.begin(),v.end());
        ll l = n-1;
        for(ll i=0;i<n-1;i++){
            ans+= min(l,v[i].second) * v[i].first;
            l -= min(l,v[i].second);
        }
        cout<<ans<<endl;
    }
    return 0;
}