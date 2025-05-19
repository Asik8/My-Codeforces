#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const ll N = 1e6+10;
bool vis[N];
vector<ll> a[N],ans;
int ar[N];
ll cnt=0;
char c[N];

void DFS(ll n)
{
    ans.pb(n);
    if(c[n] == '0') cnt++;
    vis[n] = true;
    for(ll x:a[n])
    {
        if(!vis[x])
        {
            DFS(x);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            a[i].clear();   
            vis[i] = false; 
        }
        vector <ll> v(n+1);
        for (int i=1;i<=n;i++) 
        {
            cin >>v[i];
            a[i].pb(v[i]); 
        }
        for (int i=1;i<=n;i++) 
            cin >>c[i];
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                cnt = 0;
                ans.clear();
                DFS(i);
                for(ll x:ans) ar[x] = cnt;
            }
        }  
        for(int i=1;i<=n;i++) cout<<ar[i]<<" "; 
        cout<<endl;
    }
    return 0;
}