#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar, ar + n);
        ll c=0,mx = 0;
        for (int i = 0; i < n ; i++)
        {
            c++;
            if (i == n-1 || (ar[i+1]-ar[i])>k)
            {
                mx = max(c,mx);
                c = 0;             
            }
        }
        cout<<n-mx<<endl;
    }

    return 0;
}