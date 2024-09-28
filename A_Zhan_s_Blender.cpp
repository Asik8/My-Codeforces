#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll x,y;
        cin>>x>>y;
        x = min(x,y);
        cout<<((n+x)-1)/x<<endl;    
    }
    return 0;
}