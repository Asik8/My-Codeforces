#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,c,d;
        cin >> n>>c>>d;
        vector <ll> v(n*n),ans;
        ll m = INT_MAX;
        for (ll i = 0;i<n*n;i++) 
        {
            cin >>v[i];
            if(v[i]<m) m = v[i]; 
        }
        ll ar[n][n];
        memset(ar,-1,sizeof(ar)); 
        ar[0][0] = m;
        ans.pb(m);
        forni
        {
            fornj
            {
                if(i+1<n && ar[i+1][j] == -1) 
                {
                    ar[i+1][j] = ar[i][j]+c;
                    ans.pb(ar[i+1][j]);
                }
                if(j+1<n && ar[i][j+1] == -1) 
                {
                    ar[i][j+1] = ar[i][j]+d;
                    ans.pb(ar[i][j+1]);
                }
            }
        }   
        sort(ans.begin(),ans.end());
        sort(v.begin(),v.end());
        if(ans == v) py
        else pn 
    }
    return 0;
}
