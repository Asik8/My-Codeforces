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
        ll a[n][m];
        for (int i = 0; i < n; i++)
            for(int j=0;j<m;j++) cin >> a[i][j]; 

        int ma = INT_MIN,i_in = 0,j_in = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j] >ma)
                {
                    ma = a[i][j];
                }
            }
        }  

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j] == ma)
                {
                    a[i][j] --;
                    ma--;
                }
            }
        }      

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<< " ";
            }
            cout<<endl;
        }      
    }

    return 0;
}