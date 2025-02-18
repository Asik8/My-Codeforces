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
const int N=3e5+9;
string s;
vec(ll) g[N],op(N);

void dfs(ll u){
    if(g[u][0]!=0){
        ll v=g[u][0];
        if(s[u-1]!='L') op[v]=op[u]+1;
        else op[v]=op[u];
        dfs(v);
    }
    if(g[u][1]!=0){
        ll v=g[u][1];
        if(s[u-1]!='R') op[v]=op[u]+1;
        else op[v]=op[u];
        dfs(v);
    }
}

void asikM(){
    ll n;
    cin >> n;
    cin>>s;
    for(int i=1;i<=n;i++){
        g[i].clear();
        op[i]=0;
    }
    f(i,1,n+1){
        ll l,r;
        cin>>l>>r;
        g[i].pb(l);
        g[i].pb(r);
    }
    dfs(1);
    ll c=INT_MAX;
    f(i,1,n+1){
        if(g[i][0]==0 && g[i][1]==0){
            c=min(c,op[i]);
        }
    }
    co(c)
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