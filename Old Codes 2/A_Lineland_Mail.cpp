#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    ll m = llabs(ar[0] - ar[1]);
    ll ma = llabs(ar[0] - ar[n - 1]);
    cout << m << " " << ma << endl;
    for (int i = 1; i < n; i++)
    {
        ll d1 = llabs(ar[i] - ar[i+1]);
        ll d2 = llabs(ar[i] - ar[i-1]);
        ll ma1 = llabs(ar[i] - ar[n - 1]);
        ll ma2 = llabs(ar[i] - ar[0]);
        cout << min(d1,d2) << " " << max(ma1,ma2) << endl;
    }

    return 0;
}