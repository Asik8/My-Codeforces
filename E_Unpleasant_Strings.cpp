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
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

const int N=1e6+7,K=26;
char s[N],t[N];
int nx[N][K],dp[N];
ll n,k,q;

void asikM(){
    cin>>n>>k>>s;
    fl(i,0,k) nx[n][i]=n+1;
    for(int i=n-1;i>=0;i--){
        fl(j,0,k) nx[i][j]=nx[i+1][j];
        int c=(int)(s[i]-'a');
        nx[i][c]=i+1;
    }
    dp[n+1]=0;
    for(int i=n;i>=0;i--){
        dp[i]=N;
        fl(j,0,k) dp[i]=min(dp[i],dp[nx[i][j]]);
        dp[i]++;
    }
    cin>>q;
    while(q--){
        cin>>t;
        int m=strlen(t),p=0;
        for(int i=0;p<=n && i<m;i++){
            int c=(int)(t[i]-'a');
            p=nx[p][c];
        }
        co(dp[p])
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt=1;
    // cin >> tt;
    while (tt--)
    asikM();      
    return 0;
}