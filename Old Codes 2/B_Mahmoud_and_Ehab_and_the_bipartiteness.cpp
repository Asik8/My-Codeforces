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
vec(ll)a[N],col(N,0);

void dfs(ll s){
    queue<ll>q;
    q.push(s);
    col[s]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:a[u]){
            if(!col[v]){
                col[v]=3-col[u];
                q.push(v);
            }
        }
    }
}

void asikM(){
    ll n;
    cin >> n;
    for(int i=1;i<=n-1;i++){
        ll u,v;
        cin>>u>>v;
        a[u].pb(v);
        a[v].pb(u);
    }
    dfs(1);
    ll a=0,b=0;
    for(int i=1;i<=n;i++){
        if(col[i]==1)a++;
        if(col[i]==2)b++;
    }
    co(a*b-(n-1))
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