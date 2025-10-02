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
    ll n,m,v,s=0;
    cin>>n>>m>>v;
    vector<ll>a(n),p(n+1,0),v1,v2;
    for(auto& x:a)cin>>x; 
    fl(i,1,n+1,1) p[i]=p[i-1]+a[i-1];
    // flx(p)
    v1.pbk(0);
    v2.pbk(n-1);
    forni{
        s+=a[i];
        if(s>=v){
            v1.pbk(i+1);
            s=0;
        }
    }
    s=0;
    flr(i,n-1,0,1){
        s+=a[i];
        if(s>=v){
            v2.pbk(i-1);
            s=0;
        }
    }
    if(sz(v1)-1<m){
        co(-1)
        return;
    }
    ll ans=0;
    // flx(v1)
    // flx(v2)
    // elc
    fl(i,0,m+1,1){
        ll l=v1[i],r=v2[m-i]+1;
        // cout<<l<<" "<<r<<el
        ll sum=p[r]-p[l];
        ans=max(ans,sum);
    }
    // elc
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