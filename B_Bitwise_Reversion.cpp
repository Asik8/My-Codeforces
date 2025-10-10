#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py {cout<<"YES\n"; return;}
#define pys cout<<"Yes\n";
#define pn {cout<<"NO\n"; return;}
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

void asikM(){
    ll x,y,z;
    cin>>x>>y>>z;
    fl(i,0,31,1){
        int xi=(x>>i)&1;
        int yi=(y>>i)&1;
        int zi=(z>>i)&1;
        ll a=0,b=0,c=0;
        if(xi) a=b=1;
        if(yi) b=c=1;
        if(zi) a=c=1;
        if(xi==0&&(a&b)) pn
        if(yi==0&&(b&c)) pn
        if(zi==0&&(a&c)) pn
    }
    py
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