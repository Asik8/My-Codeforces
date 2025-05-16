#include <bits/stdc++.h>
#define startt                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
typedef long long ll;
using namespace std;
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
#define MOD2 998244353
#define MX 1000000000
#define MXL 1000000000000000000
#define PI (ld)2 * acos(0.0)
#define pb push_back
#define sc second
#define fr first
#define int long long
#define endl '\n'
#define ld long double
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
int ceildiv(int one, int two)
{
    if (one % two == 0)
    {
        return one / two;
    }
    else
    {
        return one / two + 1;
    }
}
int power(int n, int pow, int m)
{
    if (pow == 0)
        return 1;
    if (pow % 2 == 0)
    {
        ll x = power(n, pow / 2, m);
        return (x * x) % m;
    }
    else
        return (power(n, pow - 1, m) * n) % m;
}
int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}
int factorial(int n, int mod)
{
    if (n > 1)
        return (n * factorial(n - 1, mod)) % mod;
    else
        return 1;
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
vector<int> read(int n)
{
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb(x);
    }
    return a;
}
struct prefix_sum
{
    vint pref;
    void build(vint a)
    {
        pref.pb(0);
        for (int i = 0; i < a.size(); i++)
        {
            pref.pb(pref.back() + a[i]);
        }
    }
    int get(int l, int r) { return pref[r] - pref[l - 1]; }
}; // mesanu

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb({x + min(i + 1, n - i), x + i + 1});
    }
    sort(all(a));
    vector<int> pref;
    pref.pb(0);
    for (int i = 0; i < n; i++)
    {
        pref.pb(pref.back() + a[i].fr);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int new_c = c - a[i].sc;
        int l = 0, r = n;
        int mx = 0;
        while (l <= r)
        {
            int mid = l + r >> 1;
            // Calculate price
            int price = pref[mid];
            int now = mid + 1;
            if (mid > i)
            {
                price -= a[i].fr;
                now--;
            }
            if (price <= new_c)
            {
                mx = max(now, mx);
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        ans = max(ans, mx);
    }
    cout << ans << endl;
}

int32_t main()
{
    startt int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}