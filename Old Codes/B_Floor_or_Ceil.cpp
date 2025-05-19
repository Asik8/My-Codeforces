#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

ll mncnt(ll n){
    ll c=0;
    while(n>0){
        c++;
        n/=2;
    }
    return c;
}

ll mxcnt(ll n){
    ll c=0;
    while(n>1){
        c++;
        n=((n+1)/2);
    }
    return c;
}

void asikM(){
    ll x,n,m;
    cin >>x>>n>>m;
    // co(mncnt(x))
    // co(mxcnt(x))
    ll l=x,v1=0,v2=0;
    fl(i,0,n){
        if(l==0) break;
        l/=2;
    }
    fl(i,0,m){
        if(l==0 || l==1) break;
        l=((l+1)/2);
    }
    v1=l;
    l=x;
    fl(i,0,m){
        if(l==0 || l==1) break;
        l=((l+1)/2);
    }
    fl(i,0,n){
        if(l==0) break;
        l/=2;
    }
    v2=l;
    ct(min(v1,v2))
    co(max(v1,v2))
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}