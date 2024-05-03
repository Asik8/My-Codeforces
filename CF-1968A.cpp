#include <iostream>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll m =-1, in = 0;
        for (int i = 1; i < n; i++)
        {
            ll val = gcd(n, i) + i;
            if (val > m)
            {
                m = val;
                in = i;
            }
        }
        cout << in << endl;
    }
}
