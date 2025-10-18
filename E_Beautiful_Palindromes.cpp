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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n),un;
    set<ll>s;
    for(auto& x:v) cin>>x; 
    forni s.insert(i+1);
    forni s.erase(v[i]);
    if(s.empty()){
        fl(i,0,k,1) ct(v[i])
        elc
        return; 
    }
    ll f=*s.begin();
    forni s.insert(i+1);
    s.erase(f);
    s.erase(v[n-1]);
    ct(f)
    fl(i,0,k-1,1){
        if(sz(s)){
            ct(*s.begin());
            s.erase(s.begin());
        } else ct(v[n-1])
    }
    elc
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