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

void asikM(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> v(n),p(m+1,0),pr(n+1,0);
    for(auto &x:v) cin>>x;
    vector<pair<pair<int,int>,int>>d(m);
    f(i,0,m){
        ll l,r,x;
        cin>>l>>r>>x;
        l--;
        d[i]={{l,r},x};
    }
    f(i,0,k){
        ll x,y;
        cin>>x>>y;
        x--;
        p[x]++;
        p[y]--;
    }
    f(i,1,m+1) p[i]+=p[i-1];
    f(i,0,m){
        ll x=d[i].first.first;
        ll y=d[i].first.second;
        pr[x]+=d[i].second*p[i];
        pr[y]-=d[i].second*p[i];
    }
    f(i,1,n) pr[i]+=pr[i-1];
    forni ct(v[i]+pr[i])
    elc
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}