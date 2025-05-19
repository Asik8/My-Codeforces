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
        ll n,c=0;
        cin >> n;
        c+= n/4;
        n%=4;
        c+=n/2;
        cout<<c<<endl;     
    }
    return 0;
}