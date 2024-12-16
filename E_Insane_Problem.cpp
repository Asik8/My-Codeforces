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

ll ch(ll n, ll k){
    ll p=1,c=0;
    while(p<=n){
        c++;
        p*=k;
    }
    return c-1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        ll l=ch(max(max(l1,r1),max(l2,r2)),k);
        vector<ll>p;
        for(int i=1;i<=l;i++){
            p.pb(pow(k,i));
        }
        co(p.size())
        for(auto x:p) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}