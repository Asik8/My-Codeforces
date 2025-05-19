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
    int ans = 1;
    for(int i=0;i<n;i++)
    {
        int node = ar[i];
        int h = 1;
        while(node!=-1)
        {
            node = ar[node-1];
            h++;
        }
        ans = max(ans,h);
    }
    cout<<ans<<endl;

    return 0;
}