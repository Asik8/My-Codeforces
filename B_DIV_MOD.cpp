#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll l, r, a, x;
        cin >> l >> r >> a;
        if (a == 1)
            cout << r << endl;
        else
        {
            ll ans = (r / a) + r % a;
            if (r - (r % a) - 1 >= l)
            {
                x = r - (r % a) - 1;
            }
            else
                x = r;
            ll ans2 = (x / a) + x % a;
            cout << max(ans, ans2) << endl;
        }
    }

    return 0;
}