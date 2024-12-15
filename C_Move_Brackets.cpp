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
        string s;
        cin >>n>>s;
        ll fb = 0, nc = 0;
        for (char c:s) {
            if (c == '(') fb++;
            else {
                if (fb > 0) fb--;  
                else nc++;
            }
        }
        cout << nc << endl;
    }
    return 0;
}
