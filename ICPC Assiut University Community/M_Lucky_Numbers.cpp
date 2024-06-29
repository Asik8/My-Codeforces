#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    vector<ll> v;
    for (int i = a; i <= b; i++)
    {
        int x = i;
        if (x == 4 || x == 7)
            v.pb(x);
        else if (x > 9)
        {
            bool f = true;
            while (x != 0)
            {
                int div = x % 10;
                if (div != 4 && div != 7)
                {
                    f = false;
                    break;
                }
                x /= 10;
            }
            if (f)
                v.pb(i);
        }
    }
    if (v.size() > 0)
    {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    else cout<<"-1\n";

    return 0;
}