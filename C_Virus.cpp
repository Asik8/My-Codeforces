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
    ll n,m;
    cin >> n>>m;
    vector <ll> v(m);
    for (auto& x:v) cin >>x; 
    vector<ll> d;
    sort(all(v));
    fl(i,1,m)d.pb(v[i]-v[i-1]-1);
    d.pb(n-v.back()+v[0]-1);
    ll red=0,safe=0;
    sort(allr(d));
    fl(i,0,sz(d)){
        if(d[i]>red){
            d[i]-=red;
            red+=4;
            if(d[i]>1) safe+=(d[i]-1);
            else safe++;
        }
    }
    co(n-safe)
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