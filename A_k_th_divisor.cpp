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
    ll n,k;
    cin >> n>>k;
    vector<ll> v;
    for(ll i=1;i*i<=n;i++){
        if(!(n%i)){
            v.pb(i);
            if(i!=n/i) v.pb(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k) co(-1)
    else co(v[k-1])     
    return 0;
}