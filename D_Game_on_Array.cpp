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

void tt(bool &a, bool &b){
    a=!a;
    b=!b;
}

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    map<ll,ll>m;
    forni m[v[i]]++;
    vec(pi)od,ev;
    for(auto [x,y]:m){
        if(x&1) od.pb({x,y});
        else ev.pb({x,y});
    }
    sort(all(od), [](auto &a, auto &b){
        if (a.second == b.second) return a.first > b.first;
        return a.second > b.second;
    });
    // for(auto [x,y]:od) cout<<x<<" "<<y<<el
    // for(auto [x,y]:ev) cout<<x<<" "<<y<<el
    bool a=true,b=false;
    ll c=0,d=0;
    for(auto [x,y]:od){
        c+=(x/2)*y;
        d+=(x/2)*y;
        if(a) c+=y;
        else d+=y;
        tt(a,b);
    }
    for(auto [x,y]:ev){
        c+=(x/2)*y;
        d+=(x/2)*y;
    }
    cout<<c<<" "<<d<<el
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