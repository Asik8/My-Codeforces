#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout << "YES\n";
#define pn cout << "NO\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (auto &x : v)
            cin >> x;
        sort(v.begin(), v.end());
        ll a = 0, b = 0;
        for (int i = n - 1; i >= 0; i -= 2)
        {
            a += v[i];
            if (i - 1 >= 0)
            {
                b += v[i - 1];
                ll d = v[i] - v[i - 1];
                if (d <= k)
                {
                    k -= d;
                    b += d;
                }
                else
                {
                    b += k;
                    k = 0;
                }
            }
        }
        cout << a - b << endl;
    }
    return 0;
}