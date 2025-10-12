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
#define co(x1) {cout<<x1<<"\n"; return;}
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
    vector<ll>v(n),in;
    for(auto& x:v)cin>>x; 
    if(v[k-1]==*min_element(all(v))) co(0)
    if(v[k-1]==*max_element(all(v))) co(n-1)
    fl(i,0,k-1,1) if(v[i]>v[k-1]) in.pbk(i);
    // co(sz(in))
    if(!sz(in)){
        ll ans=k-1;
        fl(i,k,n,1){
            if(v[i]<v[k-1]) ans++;
            else break;
        }
        co(ans)
    }
    ll ans=(in[0]==0)?0:1;
    if(sz(in)==1) ans+=(k-in[0]-2);
    else ans+=(in[1]-in[0]-1);
    swap(v[0],v[k-1]);
    ll c=0;
    fl(i,1,n,1){
        if(v[i]<v[0]) c++;
        else break;
    }
    co(max(c,ans))
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