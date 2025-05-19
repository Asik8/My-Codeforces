#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll c = 0,sum = 0,mx= INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum += v[i];
            mx = max(mx,v[i]);
            if((sum-mx) == mx) c++;
        }
        cout << c << endl;
    }

    return 0;
}