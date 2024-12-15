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
        ll a,b,c;
        cin >> a>>b>>c;
        ll ma = max(a,max(b,c));
        ll mi = min(a,min(b,c));
        cout<<ma-mi<<endl;     
    }

    return 0;
}