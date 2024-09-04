#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll x,y,k;
        cin>>x>>y>>k;
        ll a = (x+k-1)/k;     
        ll b = (y+k-1)/k;
        if(a<=b)cout<<2*b<<endl;
        else cout<<(2*a-1)<<endl;     
    }
    return 0;
}