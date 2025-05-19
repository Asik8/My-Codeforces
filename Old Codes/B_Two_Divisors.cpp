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
        ll a,b;
        cin>>a>>b;
        if(b%a == 0) cout<<(b*b)/a<<endl;
        else cout<<a*b/__gcd(a,b)<<endl;      
    }
    return 0;
}