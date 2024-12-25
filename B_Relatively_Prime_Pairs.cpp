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
ll LCM(ll a,ll b){
    return (a*(b/__gcd(a,b)));
}
bool isPrime(ll n){
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++){
        if(!(n%i)){
            return false;
        }
    }
    return true;
}
// vector<ll>divisors(ll n){
//     vector<ll>v;
//     for(ll i=1;i*i<=n;i++){
//         if(!(n%i)){
//             v.pb(i);
//             if((n/i) != i) v.pb(n/i);
//         }
//     }
//     sort(v.begin(),v.end());
//     return v;
// }

void asikM(){
    ll l,r;
    cin>>l>>r;
    py
    while(l<r){
        cout<<l<<" "<<l+1<<endl;
        l+=2;
    }
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