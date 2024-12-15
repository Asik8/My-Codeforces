#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll tents = a;

        if (b >= 3)
        {
            tents += b/3;
            b %= 3;
        }
        if (b == 2 && c > 0)
        {
            tents++;
            b -= 2;
            c--;
        }
        if (b == 1 && c >= 2)
        {
            b--;
            c -= 2;
            tents++;
        }

        if (b == 0 && c > 0)
        {
            tents += (c / 3);
            if (c % 3 > 0) tents++;
        }
        bool rem = false;
        if (b > 0) rem = true;
        if (rem) cout << "-1\n";
        else cout << tents << endl;
    }

    return 0;
}