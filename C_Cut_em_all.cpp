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
const int N=1e5+20;
ll c=0;
vec(int) a[N],cnt(N,0);

void dfs(int u,int par){
    cnt[u]=1;
    for(auto v:a[u]){
        if(v!=par){
            dfs(v,u);
            cnt[u]+=cnt[v];
        }
    }
    if(!(cnt[u]%2)) c++;
}

void asikM(){
    ll n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        a[u].pb(v);
        a[v].pb(u);
    } 
    if(n&1){
        co(-1)
        return;
    }
    dfs(1,-1);
    co(c-1);
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