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

bool isPrime(ll n){
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++){
        if(!(n%i)){
            return false;
        }
    }
    return true;
}

vector<ll>divisors(ll n){
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

ll LCM(ll a,ll b){
    return (a*(b/__gcd(a,b)));
}

void asikM(){
    ll n,mn=INT_MAX,a=0,b=0;
    cin >> n;
    if(isPrime(n)){
        cout<<1<<" "<<n-1<<el
        return;
    }
    vec(ll) v=divisors(n);
    for(auto x:v){
        if(LCM(x,n-x)<mn && x<n){
            mn=LCM(x,n-x);
            a=x;
            b=n-x;
        }
    }
    cout<<a<<" "<<b<<el
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