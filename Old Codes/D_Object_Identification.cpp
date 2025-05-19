#include <iostream>
#include <vector>
#define ll long long
using namespace std;
using vi = vector<ll>;
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

ll ask(ll i, ll j)
{
    cout << "? " << i << " " << j << endl;
    ll dis;
    cin >> dis;
    return dis;
}

void solve()
{
    ll n;
    cin >> n;
    vi v(n);
    for (auto &x : v) cin >> x;  

    vi f(n + 1, 0);
    vi idx(n + 1, 0);
    
    for (ll i = 0; i < n; i++)
    {
        f[v[i]] = 1;
        idx[v[i]] = i + 1;
    }

    for (ll i = 1; i <= n; i++)
    {
        if (f[i] == 0)
        {
            ll dis = ask(i, (i % n) + 1);
            if (dis == 0)
            {
                cout << "! A" << endl;
                return;
            }
            else
            {
                cout << "! B" << endl;
                return;
            }
        }
    }
    
    ll dis = ask(idx[1], idx[n]);
    ll dis2 = ask(idx[n], idx[1]);
    
    if (dis >= n)
    {
        cout << "! B" << endl;
    }
    else if (dis < n - 1)
    {
        cout << "! A" << endl;
    }
    else if (dis2 == dis)
    {
        cout << "! B" << endl;
    }
    else
    {
        cout << "! A" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
