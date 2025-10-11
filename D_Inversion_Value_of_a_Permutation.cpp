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

const ll N=1001;
ll ch(ll n){return n*(n-1)/2;}
vec(vector<ll>) dp(N);
vec(ll)bs(N,LLONG_MAX);

void asikM(){
    ll n,k;
    cin>>n>>k;
    ll nd=ch(n)-k; 
    if(k==0){
        forni ct(i+1)
        elc
        return;
    } else if(nd==0){
        flr(i,n,1,1) ct(i)
        elc
        return;
    } else if(bs[nd]>n){
        co(0)
        return;
    }
    ll l=0,r=n;
    fl(i,0,sz(dp[nd]),1){
        l=r-dp[nd][i]+1;
        fl(j,l,r+1,1) ct(j)
        // l--;
        r=l-1;
    }
    while(r) ct(r--)
    elc
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    bs[0]=0;
    dp[0]={};
    vec(pi)p;
    for(int i=2;ch(i)<=N;i++) p.pbk({i,ch(i)});
    fl(i,1,N,1){
        acp(p,x,y){
            if(y<=i && bs[i-y]!=LLONG_MAX){
                if(bs[i-y]+x<bs[i]){
                    bs[i]=bs[i-y]+x;
                    dp[i]=dp[i-y];
                    dp[i].pbk(x);
                }
            }
        }
    }
    while(t--)
    asikM();      
    return 0;
}