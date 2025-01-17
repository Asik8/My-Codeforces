#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>
const ll N=1e7+20;
vector<int>vis(N+1,1);

void asikM(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        if(n<4){
            pn
            continue;
        }
        ll s=sqrt(n);
        if(s*s==n && vis[s]) py else pn
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vis[0]=0;
    vis[1]=0;
    for(ll i=2;i<=N;i++){
        if(vis[i]){
            for(ll j=i+i;j<=N;j+=i){
                vis[j]=0;
            }
        }
    }
    asikM();      
    return 0;
}