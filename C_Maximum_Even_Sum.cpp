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

vector<ll> divisors(ll n){
    vector<ll>v;
    for(ll i=1;i*i<=n;i++){
        if(!(n%i)){
            v.pb(i);
            if((n/i) != i) v.pb(n/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}

void asikM(){
    ll a,b;
    cin >>a>>b;
    ll mx=(((a+b)%2==0)?a+b:-1);
    vec(ll)d=divisors(b);
    if(sz(d)){
        for(auto x:d){
            ll c=a,tmp=b;
            c*=x;
            tmp/=x;
            if((c+tmp)%2==0) mx=max(mx,c+tmp);
        }  
    }  
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