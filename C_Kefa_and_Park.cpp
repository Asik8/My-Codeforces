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

const int N=2e5+20;
ll c=0,n,k;
vector <ll> a;
vec(ll) g[N];
bool vis[N];

void dfs(int u,int m){
    vis[u]=true;
    if(m>k) return;
    bool f= true;
    for(auto v:g[u]){
        if(!vis[v]){
            f=false;
            dfs(v,m*a[v]+a[v]);
        }
    }
    if(f) c++;
}

void asikM(){
    cin >> n>>k;
    a.resize(n);
    memset(vis,false,sizeof(vis));
    forni cin>>a[i];
    f(i,0,n-1){
        ll u,v;
        cin>>u>>v;
        u--,v--;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(0,a[0]);
    co(c);
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