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
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n),a(n+1,0),b(n+1,0),dp(n,1);
    for(auto& x:v)cin>>x; 
    forni{
        if(v[i]==0) a[i+1]=1;
        else b[i+1]=1;
    }
    fl(i,1,n+1,1){
        a[i]=(a[i])? a[i-1]+1:a[i-1];
        b[i]=(b[i])? b[i-1]+1:b[i-1];
    }
    fl(i,1,n,1) if(v[i]!=v[i-1]) dp[i]+=dp[i-1];
    // flx(a)
    // flx(b)
    // flx(dp)
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll z=a[r]-a[l-1],o=b[r]-b[l-1];
        if(z%3 || o%3){
            co(-1)
            continue;
        }
        if(l-1<=r-dp[r-1]-1) co((r-l+1)/3)
        else co(((r-l+1)/3)+1)
    }
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