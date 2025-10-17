#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

ll n;
ll qo(ll l,ll r){
    cout<<1<<" "<<l<<" "<<r<<el
    cout.flush();
    ll a;
    cin>>a;
    return a;
}

ll qt(ll l,ll r){
    cout<<2<<" "<<l<<" "<<r<<el
    cout.flush();
    ll a;
    cin>>a;
    return a;
}

void asikM(){
    cin>>n;
    ll tp=qo(1,n), ta=qt(1,n);
    ll len=ta-tp;
    ll lw=1,h=n;
    while(lw<h){
        ll m=(lw+h)/2;
        ll sp=qo(1,m),sa=qt(1,m);
        if(sa-sp==0)lw=m+1;
        else h=m;
    }
    ll l=lw;
    h=n;
    while(lw<h){
        ll m=(lw+h)/2;
        ll sp=qo(l,m),sa=qt(l,m);
        if(sa-sp==(m-l+1))lw=m+1;
        else h=m;
    }
    cout<<"! "<<l<<" "<<lw<<el
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}