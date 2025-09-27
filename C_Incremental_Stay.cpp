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
    ll n;
    cin>>n;
    n<<=1;
    vector<ll>v(n),a1,a2;
    for (auto& x:v) cin>>x; 
    ll s1=0,s2=0;
    if(n==2){
        co(v.back()-v[0])
        return;
    }
    forni{
        if(i&1) s1+=v[i];
        else s1-=v[i];
    }
    s2=v.back()-v[0];
    fl(i,1,n-1,1){
        if(i&1) s2-=v[i];
        else s2+=v[i];
    }
    a1.pbk(s1);
    a2.pbk(s2);
    fl(i,1,n-1-i,2)a1.pbk(a1.back()-2*v[i]+2*v[n-1-i]);
    fl(i,2,n-1-i-1,2)a2.pbk(a2.back()-2*v[i]+2*v[n-1-i]);
    fl(i,0,sz(a2),1) cout<<a1[i]<<" "<<a2[i]<<" ";
    if((n>>1)&1) co(a1.back()) else elc
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