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
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>
const int N=2e5+5;
vec(ll)a[N],leaf(N);

void dfs(int u,int par){
    leaf[u]=0;
    bool f= true;
    for(auto v:a[u]){
        if(v != par){
            f=false;
            dfs(v,u);
            leaf[u]+=leaf[v];
        }
    }
    if(f) leaf[u]=1;
}

void asikM(){
    ll n;
    cin >> n;
    forni a[i+1].clear();
    for(int i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        a[u].pb(v);
        a[v].pb(u);
    }
    dfs(1,-1);
    ll q;
    cin>>q;
    while(q--){
        ll x,y;
        cin>>x>>y;
        co(leaf[x]*leaf[y])
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}