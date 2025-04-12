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

void asikM(){
    ll n,k,a,b;
    cin >>n>>k>>a>>b;
    vector<pi>v(n);
    for (auto& x:v) cin>>x.first>>x.second;
    a--,b--;
    if(a<k && b<k){
        co(0)
        return;
    }
    ll mx=(abs(v[a].first-v[b].first) + abs(v[a].second-v[b].second));
    ll c2=LLONG_MAX/2,c1=LLONG_MAX/2;
    fl(i,0,k){
        c1=min(c1,(abs(v[a].first-v[i].first)+abs(v[a].second-v[i].second)));
        c2=min(c2,(abs(v[b].first-v[i].first)+abs(v[b].second-v[i].second)));
    }
    mx=min(c1+c2,mx);
    co(mx)
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