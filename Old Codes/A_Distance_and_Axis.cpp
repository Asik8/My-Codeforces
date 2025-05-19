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
        ll n,k;
        cin >> n>>k;
        ll ans;
        ans = max(0LL,(k-n));
        n += ans;
        if((k&1 && n%2==0) || (n&1 && k%2==0)) ans++;
        cout<<ans<<endl;
    }
    return 0;
}