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

const ll M=998244353,N=2e5+10;
ll dp[N],n,m;
vector<vector<ll>>v[N];

ll binex(ll a,ll b,ll mod){
    a%=mod;
    ll res=1;
    b=b%(mod-1);
    while(b){
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}

ll modinv(ll a,ll mod){
    return binex(a,mod-2,mod);
}

ll d(ll i){
    if(i>m) return 1;
    if(dp[i]!=-1) return dp[i];
    ll ans=0;
    for(auto x:v[i]){
        ll r=x[0],p=x[1],q=x[2],val=1;
        val*=modinv((q-p+M)%M,M);
        val%=M;
        val*=q;
        val%=M;
        val*=p;
        val%=M;
        val*=modinv(q,M);
        val%=M;
        ans+=val*d(r+1)%M;
        ans%=M;
    }
    return dp[i]=ans;
}

void asikM(){
    cin >> n >> m;
    ll val=1;
    forni{
        ll l,r,p,q;
        cin>>l>>r>>p>>q;
        v[l].pb({r,p,q});
        val*=((q-p+M)%M);
        val%=M;
        val*=modinv(q,M);
        val%=M;
    }
    memset(dp,-1,sizeof dp);
    co(val*d(1)%M);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    while(t--) asikM();
    return 0;
}
