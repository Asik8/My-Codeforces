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

void asikM(){
    ll n,k,l,r,i=0;
    cin>>n>>k>>l>>r;
    vec(ll) v(n);
    for(auto &x:v)cin>>x;
    ll ans=0;
    map<ll,ll>m;
    set<pi>s;
    acv(v,x){
        if(m.find(x)!=m.end()) s.erase({m[x],x});
        m[x]=i;
        s.insert({i,x});
        if(sz(s)>k+1) s.erase(s.begin());
        if(sz(s)<k){
            i++;
            continue;
        }
        ll lo,hi;
        if(sz(s)==k){
            lo=i-s.begin()->first+1;
            hi=i+1;
        } else{
            lo=i-next(s.begin())->first+1;
            hi=i-s.begin()->first;
        }
        lo=max(lo,l);
        hi=min(hi,r);
        if(lo<=hi) ans+=hi-lo+1;
        i++;
    }
    co(ans)
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