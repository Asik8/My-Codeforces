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
    ll n,t;
    cin >>n>>t;
    vector<ll>v(n);
    for(auto &x:v) cin>>x;
    ll c=0,l=0,r=0;
    while(r<n){
        c+=v[r++];
        if(c>t)c-=v[l++];
    }
    co(r-l)
    return 0;
}