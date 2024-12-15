#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin >> n>>m;
        ll a[n+2][m+2]={};
        for (int i = 1; i <= n; i++)
            for(int j=1;j<=m;j++) cin >> a[i][j]; 

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j] >a[i+1][j] && a[i][j]>a[i-1][j] && a[i][j]>a[i][j+1] && a[i][j]>a[i][j-1])
                {
                    ll ma = max(max(a[i+1][j],a[i-1][j]),max(a[i][j+1],a[i][j-1]));
                    a[i][j] = ma;
                }
            }
        }  

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }         
    }

    return 0;
}