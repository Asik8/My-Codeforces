#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int N = 1e5 + 5;
int parent[N];
int group_size[N];
void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    dsu_initialize(n);
    vector <pair<int,int>> bad;
    vector <pair<int,int>> create;
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int para = dsu_find(a);
        int parb = dsu_find(b);
        if(para == parb) bad.pb({a,b});
        else dsu_union_by_size(a,b);
    }
    for(int i=2;i<=n;i++)
    {
        ll parA = dsu_find(1);
        ll parB = dsu_find(i);
        if(parA != parB) 
        {
            create.pb({1,i});
            dsu_union_by_size(1,i);
        }
    }
    cout<<bad.size()<<endl;
    for(int i=0;i<bad.size();i++) cout<<bad[i].first<<" "<<bad[i].second<<" "<<create[i].first<<" "<<create[i].second<<endl;
    return 0;
}