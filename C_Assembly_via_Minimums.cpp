#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
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
        ll m=n*(n-1)/2;
        vector <ll> v(m);
        for (auto& x:v) cin >>x;
        sort(v.begin(),v.end());
        for(ll i=0;i<m;i+=--n) cout<<v[i]<<" ";
        cout<<"1000000000\n"; 
    }
    return 0;
}
