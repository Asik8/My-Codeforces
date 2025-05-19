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
        ll n,x;
        cin >>x>>n;
        ll d = 0;
        if(n%4 == 1) d = n;
        else if(n%4 == 2) d = -1;
        else if(n%4 == 3) d = -n-1;
        if(x%2) cout<<x+d<<endl;
        else cout<<x-d<<endl;
    }

    return 0;
}