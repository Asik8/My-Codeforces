#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int N = 1e5+5;
vector<int> v[N];
bool vis[N];
vector<ll> path;
ll level[N];
ll parent[N];

void bfs_Path_Length(ll s,ll d)
{
    if(s == d)
    {
        cout<<0<<endl;
        return;
    }
    queue<ll>q;
    q.push(s);
    level[s] = 0;
    vis[s] = true;
    while(!q.empty())
    {
        ll n = q.front();
        q.pop();
        for(ll x:v[n])
        {
            if(!vis[x])
            {
                q.push(x);
                level[x] = level[n]+1;
                vis[x] = true;
                parent[x] = n;
            }
        }
    }
    if(parent[d] == -1) 
    {
        cout<<-1<<endl;
        return;
    }
    ll l = d;
    while(1)
    {
        if(l == -1) break;
        path.pb(l);
        l = parent[l];
    }
    cout<<path.size()-1<<endl;
    path.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll s,d;
        cin>>s>>d;
        memset(vis,false,sizeof(vis));
        memset(parent,-1,sizeof(parent));
        memset(level,-1,sizeof(level));
        bfs_Path_Length(s,d);
    }
    return 0;
}