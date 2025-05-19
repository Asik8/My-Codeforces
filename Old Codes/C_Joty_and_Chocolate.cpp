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
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll c1=n/a,c2=n/b, cmn=(a*(b/__gcd(a,b)));
    cmn=n/cmn;
    c1-=cmn;
    c2-=cmn;
    ll c=(c1*p)+(c2*q)+(cmn*max(p,q));
    co(c)
    return 0;
}