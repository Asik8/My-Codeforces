#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pi pair<ll,ll>
const ll N = 2e5+20;
vector<vector<pi>> v(N);
ll parent[N];
ll dis[N];

class cmp
{
    public:
    bool operator()(pi a,pi b)
    {
        return a.second>b.second;
    }
};

void dijkstra(ll s)
{
    priority_queue<pi,vector<pi>,cmp>pq;
    pq.push({s,0});
    dis[s] = 0;
    while(!pq.empty())
    {
        pi p = pq.top();
        pq.pop();
        ll parN = p.first;
        ll parC = p.second;
        for(pi x:v[parN])
        {
            ll xN = x.first;
            ll xC = x.second;
            if(parC+xC < dis[xN])
            {
                dis[xN] = parC+xC;
                pq.push({xN,dis[xN]});
                parent[xN] = parN;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,e;
    cin>>n>>e;
    while(e--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        v[a].pb({b,c});
        v[b].pb({a,c});
    }
    for(int i=1;i<=n;i++)
    {
        parent[i] = -1;
        dis[i] = 1e18;
    }
    dijkstra(1);
    if(dis[n] == 1e18) cout<<"-1\n";
    else
    {
        vector<ll> ans;
        ll x = n;
        while(x!=-1) 
        {
            ans.pb(x);
            x = parent[x];
        }
        reverse(ans.begin(),ans.end());
        for(ll z:ans) cout<<z<<" ";
        cout<<endl;
    }
    return 0;
}