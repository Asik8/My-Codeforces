#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll a = 0, b, c, d, p = 1, bit_b, bit_c, bit_d, m = 1;
        cin >> b >> c >> d;
        for (ll i = 0; i < 62; i++) {
            if (b&m) bit_b = 1;
            else bit_b = 0;
            if (c&m) bit_c = 1;
            else bit_c = 0;
            if (d&m) bit_d = 1;
            else bit_d = 0;
            if ((bit_b && (!bit_c) && (!bit_d)) || ((!bit_b) && bit_c && bit_d)) {
                p = 0;
                break;
            }
            if (bit_b && bit_c) {
                a += (1ll-bit_d)*m;
            } else {
                a += bit_d*m;
            }
            m<<=1;
        }
        if(p) co(a) else co(-1)
    }
    return 0;
}