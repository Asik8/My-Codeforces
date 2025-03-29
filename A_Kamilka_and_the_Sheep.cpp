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
ll LCM(ll a,ll b){
    return (a*(b/__gcd(a,b)));
}

void asikM(){
    ll n;
    cin >> n;
    vector <ll> o,e;
    forni{
        ll x;
        cin >>x; 
        if(x&1) o.pb(x);
        else e.pb(x);
    }
    ll mx=INT_MIN,mx2=INT_MIN;
    if(sz(o)>1){
        ll a = o.empty() ? 0 : *max_element(all(o));
        ll b = o.empty() ? 0 : *min_element(all(o));
        fl(i,0,LCM(a,b)+1){
            ll g=__gcd(a+i,b+i);
            mx=max(mx,g);
        }
    }
    if(sz(e)>1){
        ll c = e.empty() ? 0 : *max_element(all(e));
        ll d = e.empty() ? 0 : *min_element(all(e));
        fl(i,0,LCM(c,d)+1){
            ll g=__gcd(c+i,d+i);
            mx2=max(mx2,g);
        }
    }
    mx=max(mx,max(0LL,mx2));
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