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
        ll n,s,m;
        cin >> n>>s>>m;
        vector <pair<ll,ll>> v;
        for(int i=0;i<m+1;i++) v.pb(make_pair(i,1));
        while(n--)
        {
            ll l,r;
            cin>>l>>r;
            for(int i=l;i<=r;i++) v[i].second = 0;
        }
            ll c=0;
            for(int i=0;i<m+1;i++) if(v[i].second == 1) c++;
            cout<<c<<endl;
            if(c >= s) cout<<"YES\n";
            else cout<<"NO\n";
    }

    return 0;
}