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
        ll ans = ((n*(n+1))/2-((n-k)*((n-k)+1))/2)%2;
        if(ans) pn
        else py
    }
    return 0;
}