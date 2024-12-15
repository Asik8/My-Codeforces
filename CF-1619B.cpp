#include <bits/stdc++.h>
#include <set>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        set<ll> st;

        for (int i = 1; i <= sqrt(n); i++)
        {
            if(i*i<=n)
                st.insert(i*i);
        }
        for (int i = 1; i <= cbrt(n); i++)
        {
            if(i*i*i<=n)
                st.insert(i*i*i);
        }

        cout << st.size() << "\n";
    }

    return 0;
}
