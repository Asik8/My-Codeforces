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

void asikM(){
    ll n,m;
    cin>>n>>m;
    map<ll,set<ll>>g;
    while(m--){
        ll u,v;
        cin>>u>>v;
        g[u].insert(v);
        g[v].insert(u);
    }
    ll leaf=-1,par=-1;
    forni{
        if(sz(g[i+1])==1){
            leaf=i+1;
            break;
        }
    }
    ll x,y;
    forni{
        if(g[i+1].count(leaf)){
            y=sz(g[i+1])-1;
            par=i+1;
            break;
        }
    }
    forni{
        if(g[i+1].count(par) && sz(g[i+1])>1){
            x=sz(g[i+1]);
            break;
        }
    }
    cout<<x<<" "<<y<<el
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