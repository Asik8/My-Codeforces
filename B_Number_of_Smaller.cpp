#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m),ans;
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    ll l=0;
    for(auto x:b){
        while(a[l]<x && l<n)l++;
        ans.pb(l);
    }
    for(auto x:ans)cout<<x<<" ";
    return 0;
}