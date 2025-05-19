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

ll getNum(ll n,ll x, ll y){
    if(x==1 && y==1) return 1;
    if(x==2 && y==2) return 2;
    if(x==2 && y==1) return 3;
    if(x==1 && y==2) return 4;
    ll s=(1LL<<(n-1));
    ll total=(s*s);
    ll hf=s;
    if(x<=hf && y<=hf) return getNum(n-1,x,y);
    else if(x>hf && y>hf){
        ll nx=x-hf,ny=y-hf;
        return total+getNum(n-1,nx,ny);
    } else if(x>hf && y<=hf){
        ll nx=x-hf;
        return 2*total+getNum(n-1,nx,y);
    } else{
        ll ny=y-hf;
        return 3*total+getNum(n-1,x,ny);
    }
}

pi getPos(ll n,ll d){
    if(n==1){
        if(d==1) return {1,1};
        if(d==2) return {2,2};
        if(d==3) return {2,1};
        if(d==4) return {1,2};
    }
    ll s=(1LL<<(n-1));
    ll total=s*s;
    if(d<=total){
        auto [x,y]=getPos(n-1,d);
        return{x,y};
    } else if(d<=2*total){
        auto [x,y]=getPos(n-1,d-total);
        return{x+s,y+s};
    } else if(d<=3*total){
        auto [x,y]=getPos(n-1,d-2*total);
        return{x+s,y};
    } else{
        auto [x,y]=getPos(n-1,d-3*total);
        return{x,y+s};
    }
}

void asikM(){
    ll n,q;
    cin >> n>>q;
    while(q--){
        string s;
        cin>>s;
        if(s=="->"){
            ll x,y;
            cin>>x>>y;
            co(getNum(n,x,y))
        } else{
            ll d;
            cin>>d;
            auto [x,y]=getPos(n,d);
            cout<<x<<" "<<y<<el
        }
    }
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