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
void qu(ll ty,ll l,ll r){
    cout<<ty<<" "<<l<<" "<<r<<endl;
    cout.flush();
}
void asikM(){
    cin>>n;
    ll tp,ta;
    qu(1,1,n);
    cin>>tp;
    qu(2,1,n);
    cin>>ta;
    ll len=ta-tp;
    if(len==n){
        cout<<"! "<<1<<" "<<n<<endl;
        cout.flush();
        return;
    }
    ll lw=1,h=n;
    pi ans={1,n}; 
    while(lw<=h){
        ll m=lw+(h-lw)/2;
        ll sp,sa;
        qu(1,lw,m);
        cin>>sp;
        qu(2,lw,m);
        cin>>sa;
        ll d=sa-sp;
        if(d==0){
            lw=m+1;
            ans={lw,h};
        } else if(d==len){
            h=m;
            ans={lw,h};
            if(h-lw+1 ==len) break;
        } else{
            ll r=len-d;
            ans={m-d+1,m+r};
            break;
        }
    }
    cout<<"! "<<ans.first<<" "<<ans.second<<el
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