#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int j = 0; j < n; j++) cin >> a[j];
        for (int j = 0; j < n; j++) cin >> b[j];
        vector<int> mx(n);
        mx[0] = b[0];
        for(int i=1;i<n;i++) mx[i] = max(mx[i-1],b[i]);
        int e=0,ans=0;
        for(int i=0;i<min(n,k);i++)
        {
            e+=a[i];
            int dis = k-(i+1);
            int total = e+ dis*mx[i];
            ans = max(ans,total);
        }
        cout << ans << endl;
    }
    return 0;
}

