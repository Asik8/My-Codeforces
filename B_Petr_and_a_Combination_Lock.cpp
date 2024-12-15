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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v) cin>>x;
    bool f=false;
    for(int i=0;i<(1<<n);i++){
        ll s=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)) s+=v[j];
            else s-=v[j];
        }
        if(!(s%360)){
            f=true;
            break;
        }
    }
    if(f) py else pn
    return 0;
}