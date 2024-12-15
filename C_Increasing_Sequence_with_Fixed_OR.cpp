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
        vector <ll> v;
        v.pb(n);
        for(ll i=0;i<=__lg(n);i++){
            if((n>>i)&1 && (n-(1LL<<i))){
                v.pb(n-(1LL<<i));
            }
        }    
        co(v.size())
        for(ll i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
        cout<<endl;   
    }
    return 0;
}