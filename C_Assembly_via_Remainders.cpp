#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll N= 1e5+30;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v,ans;
        n--;
        for (int i=0;i<n;i++) 
        {
            ll x;
            cin >>x;
            v.pb(x);
        }   
        ans.pb(N);
        for(int i=0;i<n;i++) ans.pb(ans[i]+v[i]); 
        for(ll x:ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}