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
    ll n,k;
    cin >> n>>k;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    vector<vector<ll>>p(k+1);
    forni p[v[i]].push_back(i);
    ll ans=LLONG_MAX;
    fl(i,1,k+1){
        // cout<<i<<" :- ";
        // flx(p[i]);
        vector<ll>d;
        if(sz(p[i])>0){
            d.pb(p[i][0]);
            fl(j,1,sz(p[i])) d.pb(p[i][j]-p[i][j-1]-1);
            d.pb(n-p[i].back()-1);
            // flx(d)
            sort(all(d));
            if(d.back()&1){
                ll l=d.back();
                d.pop_back();
                d.pb(l/2);
            } else{
                ll l=d.back()/2;
                d.pop_back();
                d.pb(l);
            }
            sort(all(d));
            ans=min(ans,d.back());
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