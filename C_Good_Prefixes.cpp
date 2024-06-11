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
        ll c = 0,sum = 0;
        unordered_set<ll> us;
        for(int i=0;i<n;i++)
        {
            us.insert(v[i]);
            sum += v[i];
            if(sum%2 == 0)
                if(us.count(sum>>1)) c++;
        }
        cout << c << endl;
    }

    return 0;
}