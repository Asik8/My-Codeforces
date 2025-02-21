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

const int N=4005;
const int Q=2;

string s;
vec(ll)a[N];
int cnt[N][2];

void dfs(ll n){
    cnt[n][0]=(s[n-1]=='W')?1:0;
    cnt[n][1]=(s[n-1]=='B')?1:0;
    for(auto child:a[n]){
        dfs(child);
        cnt[n][0]+=cnt[child][0];
        cnt[n][1]+=cnt[child][1];
    }
}

void asikM(){
    ll n;
    cin >> n;
    f(i,0,n+1) a[i].clear();
    vector <ll> v(n-1);
    for (auto& x:v) cin >>x; 
    cin>>s;
    ll c=2;
    for(int i=0;i<n-1;i++) a[v[i]].pb(c++);
    c=0;
    dfs(1);
    f(i,1,n+1) if(cnt[i][0] == cnt[i][1]) c++;
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