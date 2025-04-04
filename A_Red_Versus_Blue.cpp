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
    ll n,r,b;
    cin >> n>>r>>b;
    ll d=0;
    string s;
    fl(i,1,100){
        ll x=i*b;
        ll y=r-x;
        if(y<=i){
            d=i;
            break;
        }
    }
    // co(d)
    fl(i,0,d) s+='R';
    r-=d;
    // cout<<d<<" "<<b<<el
    if(!(r%b)) d=r/b;
    while(r || b){
        if(b>1) d=r/b;
        if(b){
            s+='B';
            b--;
        }
        if(r){
            ll x=min(r,d);
            fl(i,0,x) s+='R';
            r-=x;
        }
    }
    co(s)
    // co(sz(s))
    // co(count(all(s),'R'))
    // co(count(all(s),'B'))
    // elc
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