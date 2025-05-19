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

ll mexcal(vector<ll>&a){
    ll n=sz(a);
    set<ll>s;
    fl(i,0,n+2) s.insert(i);
    for(auto x:a) s.erase(x);
    s.erase(*(s.begin()));
    return *s.begin();
}

void asikM(){
    ll n,m,mx=0;
    cin >>n>>m;
    vector<vector<ll>> v(n);
    for(int i=0;i<n;i++){
        ll l;
        cin>>l;
        v[i].resize(l);
        fl(j,0,l) cin>>v[i][j];
    }
    fl(i,0,n) mx=max(mx,mexcal(v[i]));
    if(mx>=m){
        co(((m+1)*mx))
        return;
    }
    ll ans=((mx+1)*mx)+((m*(m+1))/2)-((mx*(mx+1))/2);
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