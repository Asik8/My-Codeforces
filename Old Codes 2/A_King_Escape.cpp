#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0},{-1,-1},{-1,1},{1,-1},{1,1}};
int n;
bool valid(int i, int j)
{
    if (i < 0 || i > n || j < 0 || j > n)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 8; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n;
    int qi,qj;
    cin>>qi>>qj;
    int ki, kj;
    cin >> ki >> kj;
    int ti, tj;
    cin >> ti >> tj;
    memset(vis,false,sizeof(vis));
    for(int i=0;i<8;i++)
    {
        int ci = qi + d[i].first;
        int cj = qj + d[i].second;
        while (valid(ci, cj)){
            vis[ci][cj] = true;
            ci+=d[i].first;
            cj+=d[i].second;
        }
    }
    dfs(ki, kj);
    cout<<((vis[ti][tj])? "YES":"NO")<<endl;
    return 0;
}