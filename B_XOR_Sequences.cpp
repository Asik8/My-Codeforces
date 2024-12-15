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
        ll x,y;
        cin>>x>>y;
        vector <ll> a,b;
        while(x){
            a.pb((x%2));
            x/=2;
        }      
        while(y){
            b.pb((y%2));
            y/=2;
        }     
        while(a.size()<32) a.pb(0);
        while(b.size()<32) b.pb(0); 
        ll c=0;
        f(i,0,32){
            if(a[i]==b[i]) c++;
            else break;
        }
        co(((1LL)<<c))
    }
    return 0;
}