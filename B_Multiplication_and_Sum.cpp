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

const ll N=1e5+9,mod=1e9+7;
ll a[N],t[4*N],lazy[4*N];

ll merge(ll l,ll r) {return (l+r)%mod;}

void push(ll n,ll b, ll e){
    if(lazy[n]==1) return;
    t[n]=(t[n]*lazy[n])%mod;
    if(b!=e){
        ll l=(2*n),r=(2*n)+1;
        lazy[l]=(lazy[n]*lazy[l])%mod;
        lazy[r]=(lazy[n]*lazy[r])%mod;
    }
    lazy[n]=1;
}

void build(ll n,ll b,ll e){
    lazy[n]=1;
    if(b==e){
        t[n]=1;
        return;
    }
    ll m=(b+e)/2,l=n*2,r=(n*2)+1;
    build(l,b,m);
    build(r,m+1,e);
    t[n]=merge(t[l],t[r]);
}

void update(ll n,ll b,ll e,ll i,ll j,ll v){
    push(n,b,e);
    if(j<b || i>e) return;
    if(b>=i && e<=j){
        lazy[n]=v;
        push(n,b,e);
        return;
    }
    ll m=(b+e)/2,l=(n*2),r=(n*2)+1;
    update(l,b,m,i,j,v);
    update(r,m+1,e,i,j,v);
    t[n]=merge(t[l],t[r]);
}

ll query(ll n,ll b,ll e,ll i, ll j){
    push(n,b,e);
    if(e<i || b>j) return 0;
    if(b>=i && e<=j) return t[n];
    ll m=(b+e)/2,l=(n*2),r=(n*2)+1;
    return merge(query(l,b,m,i,j),query(r,m+1,e,i,j));
}

void asikM(){
    ll n,m;
    cin >> n>>m;
    build(1,1,n);
    while(m--){
        ll t;
        cin>>t;
        if(t==1){
            ll l,r,v;
            cin>>l>>r>>v;
            l++;
            update(1,1,n,l,r,v);
        } else{
            ll l,r;
            cin>>l>>r;
            l++;
            co(query(1,1,n,l,r))
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}