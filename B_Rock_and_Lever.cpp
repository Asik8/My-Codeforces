#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        unordered_map<ll,ll>mp;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        for(auto x:v) mp[__lg(x)]++;
        ll c=0;
        for(auto x:mp){
            c+=((x.second*(x.second-1))/2);
        }
        co(c)
    }
    return 0;
}