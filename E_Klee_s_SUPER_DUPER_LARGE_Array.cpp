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
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n,k;
    cin>>n>>k;
    auto sum=[&](ll l,ll r){
        return (r-l+1)*(r+l)/2*1LL;
    };
    ll l=k,r=k+n-1,m;
    while(l<r){
        m=(l+r)/2;
        if(sum(k,m)<sum(m,k+n-1)) l=m+1;
        else r=m;
    }
    co(min(abs(sum(k,l)-sum(l+1,k+n-1)),abs(sum(k,l-1)-sum(l,k+n-1))))
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}