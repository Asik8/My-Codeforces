#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector <pair<ll,ll>> v;
        vector<ll> ans;
        for (int i=0;i<n;i++){
            ll x;
            cin>>x; 
            if(x % k == 0) ans.pb(i+1);
            else v.pb({x%k,i+1});
        }
        sort(v.begin(),v.end(),[&](pair<ll,ll>a,pair<ll,ll>b){
            if(a.first==b.first) return (a.second<b.second);
            return (a.first>b.first); 
        });
        for(auto i:v) ans.pb(i.second);
        for (ll c:ans) cout<<c<<" ";
        cout<<endl;
    }
    return 0;
}