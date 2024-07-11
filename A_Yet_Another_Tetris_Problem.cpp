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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ma = *max_element(v.begin(), v.end());
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < ma)
            {
                while(v[i]<ma)
                {
                    v[i] += 2;
                    for (int j = 0; j < n; j++)
                    {
                        v[j]--;
                    }
                    ma--;
                }
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[0])
            {
                f = false;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}