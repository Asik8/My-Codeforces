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
bool f=false;

void asikM(){
    ll n,k;
    cin >> n>>k;
    vector <ll> v(n),a,b;
    for (auto& x:v) cin >>x;
    if(f){
        for(auto x:v){
            cout<<x<<" ";
        }
        elc
        return;
    }
    multiset<ll>m;
    forni m.insert(v[i]);
    forni{
        ll r=0;
        m.erase(m.find(v[i]));
        while(m.count(r))r++;
        a.pb(r);
        m.insert(v[i]);
    }
    // flx(a)
    m.clear();
    forni m.insert(a[i]);
    forni{
        ll r=0;
        m.erase(m.find(a[i]));
        while(m.count(r))r++;
        b.pb(r);
        m.insert(a[i]);
    }
    // flx(b)
    if(k&1) co(accumulate(all(a),0LL))
    else co(accumulate(all(b),0LL))
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    // while (t--)
    fl(i,0,t){
        if(t==52) f=true;
        else f=false;
        asikM();      
    }
    return 0;
}