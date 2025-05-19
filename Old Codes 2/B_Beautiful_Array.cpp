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

void asikM(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    vector <ll> v;
    if(b==0 && s==0){
        forni ct(0)
        elc
        return;
    }
    ll l=k*b,r=l+((k-1)*n);
    // cout<<l<<" "<<r<<el
    if(r<s || s<l){
        co(-1)
        return;
    }
    ll x=min(s,(l+(k-1)));
    s-=x;
    v.pb(x);
    fl(i,1,n){
        x=min(s,k-1);
        v.pb(x);
        s-=x;
    }
    flx(v)
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