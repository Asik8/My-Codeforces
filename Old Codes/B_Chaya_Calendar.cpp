#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forni for (int i = 0; i < n; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            ans = (ans/a+1)*a;
        }       
        cout<<ans<<endl;
    }
    return 0;
}