#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        ll l = n-k;
        ll a= (n*(n+1))/2;
        ll b = (l*(l+1))/2;
        ll ans = a-b;
        if(ans%2) pn
        else py
    }
    return 0;
}