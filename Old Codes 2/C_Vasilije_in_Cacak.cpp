#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k,x;
        cin >> n>>k>>x;
        ll mn = k*(k+1)/2;
        ll d = n-k;
        ll mx = n*(n+1)/2 - d*(d+1)/2;
        if(x<mn || x>mx) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}