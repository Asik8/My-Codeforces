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
        ll n,s=0;
        cin >> n;
        vector <ll> psum;
        psum.pb(0);
        for (int i=0;i<n;i++) 
        {
            ll x;
            cin >>x; 
            s+=x;
            psum.pb(s);
        }
        ll ans = 0;
        for(int i=1;i<=n;i++)
        {
            if(!(n%i))
            {
                vector<ll>v;
                for(int j=i;j<=n;j+=i) v.pb(psum[j]-psum[j-i]);
                sort(v.begin(),v.end());
                ans = max(ans,(v.back()-v[0]));
            }
        } 
        cout<<ans<<endl;
    }
    return 0;
}