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

const int N = 1e5 + 20;

void asikM() {
    int n;
    cin >> n;
    vec(vec(pi)) g(n); 
    vec(int) deg(n), a(n - 1); 
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--; 
        g[u].pb({v, i});
        g[v].pb({u, i});
        deg[u]++, deg[v]++;
    }
    if (*max_element(all(deg)) > 2) {
        co(-1)
        return;
    }
    function<void(int, int, int)> dfs = [&](int u, int par, int c) {
        for (auto [v, i] : g[u]) {
            if (v != par) {
                a[i] = c; 
                dfs(v, u, c ^ 1); 
            }
        }
    };
    int start_node = min_element(all(deg)) - deg.begin();
    dfs(start_node, -1, 0);
    for (int x : a) ct(x + 2) 
    elc
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) 
    asikM();    
    return 0;
}