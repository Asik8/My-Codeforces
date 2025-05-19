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
    ll n,k,m,mx=0,c=0;
    cin >>n>>m>>k;
    vector <ll> v(m+1);
    for (auto& x:v){
        cin >>x; 
        mx=max(mx,__lg(x));
    }    
    ll fe=v[m];
    for(int i=0;i<m;i++){
        ll x=0;
        for(int j=0;j<=mx;j++){
            if(((v[i]>>j)&1)!=((fe>>j)&1)) x++;
        }
        if(x<=k) c++;
    }
    co(c)
    return 0;
}