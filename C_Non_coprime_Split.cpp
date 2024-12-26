#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

ll divisors(ll n){
    for(ll i=2;i*i<=n;i++){
        if(!(n%i)){
            return i;
        }
    }
    return n;
}

void asikM(){
    ll l,r;
    cin>>l>>r;
    for(ll i=l;i<=r;i++){
        ll m=divisors(i);
        if(m!=i){
            cout<<m<<" "<<i-m<<endl;
            return;
        }
    }
    co(-1)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        asikM();      
    }
    return 0;
}