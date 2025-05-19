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
    set<ll>s;
    map<ll,ll>m1,m2;
    forni{
        ll x;
        cin>>x;
        s.insert(x);
        m1[x]++;
    }
    f(i,0,m){
        ll x;
        cin>>x;
        s.insert(x);
        m2[x]++;
    }
    ll ans=0;
    for(auto x:s){
        ans+=(m1[x]*m2[x]);
    }
    cout<<ans<<endl;
    return 0;
}