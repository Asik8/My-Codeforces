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
// #define el "\n";
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
    vector<ll>v(n),ps(n);
    for(auto& x:v)cin>>x; 
    sort(all(v));
    // flx(v)
    ps[0]=v[0];
    fl(i,1,n,1) ps[i]=ps[i-1]+v[i];
    // flx(ps)
    ll el=n,times=0,in=n-1,c=0;
    while(ps[in]>k)in--;
    while(in>=0){
        el=in+1;
        ll s=ps[in]+(times*el);
        // cout<<ps[in]<<" "<<times*el<<endl;
        // cout<<"For i= "<<in<<" "<<el<<' '<<s<<" ";
        if(s>k){
            in--;
            continue;
        }
        ll d=(k-s)/el+1;
        c+=(el*d);
        times+=d;
        in--;
        // cout<<d<<" "<<times<<" "<<c<<' '<<in<<endl;
    }
    co(c)
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