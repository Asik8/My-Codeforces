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
const int N=1005;
ll n,m;
int a[N][N];
bool vis[N][N];
vec(pi) d={{-1,0},{1,0},{0,-1},{0,1}};

bool ch(int i,int j){
    return (i>=0 && i<n && j>=0 && j<m);
}

ll trav(int i,int j){
    if(!(ch(i,j)) || a[i][j]==0 || vis[i][j]) return 0;
    vis[i][j]=true;
    ll cnt=a[i][j];
    for(auto [x,y]:d){
        cnt+=trav(i+x,j+y);
    }
    return cnt;
}

void asikM(){
    cin >> n>>m;
    f(i,0,n)
        f(j,0,m)
            cin>>a[i][j];
    ll ans=0;
    memset(vis,false,sizeof(vis));
    f(i,0,n){
        f(j,0,m){
            if(!vis[i][j] && a[i][j]>0){
                ll cnt= trav(i,j);
                ans=max(ans,cnt);
            }
        }
    }
    co(ans)
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