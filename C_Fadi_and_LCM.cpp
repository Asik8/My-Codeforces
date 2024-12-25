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

ll LCM(ll a,ll b){
    return (a*(b/__gcd(a,b)));
}

void asikM(){
    ll n;
    cin >> n;
    ll ans=n,a=1,b=n;
    for(ll i=1;i*i<=n;i++){
        if(!(n%i)){
            ll a1=i,a2=n/i;
            if(LCM(a1,a2) == n && max(a1,a2)<ans){
                ans=max(a1,a2);
                a=a1;
                b=a2;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--) {
        asikM();      
    // }
    return 0;
}