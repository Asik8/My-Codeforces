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
        ll n,m;
        cin >>n>>m;
        ll c=0,l=max(0LL,n-m),r=n+m;
        for(int i=0;(1LL<<i)<=r;i++){
            ll n_l=l/(1LL<<(i+1));
            ll n_r = r/(1LL<<(i+1));
            if((l&(1LL<<i)) || (r&(1LL<<i)) || n_l!=n_r){
                c|=(1LL<<i);
            }
        }
        co(c) 
    }
    return 0;
}
