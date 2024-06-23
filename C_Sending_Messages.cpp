#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back
#define py cout<<"YES\n"
#define pn cout<<"NO\n"

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,bat,a,b;
        cin>>n>>bat>>a>>b;
        vector <ll> v(n);
        bool f = true;
        for (int i = 0; i < n; i++) cin >> v[i];
        if(v[n-1]>=bat) pn;
        else
        {
            ll m = v[0];
            bat -= ((m*a)+b);
            if(bat<=0 || bat<=v[1]) pn;
            else
            {
                m = v[0];
                bat -= min(m,b);
                for(int i=1;i<n;i++)
                {
                    m = v[i]-v[i-1];
                    bat -= min(m,b);
                    if(bat<0)
                    {
                        f = false;
                        break;
                    }
                }
                if(!f) pn;
                else py;
            }
        }
    }
    return 0;
}