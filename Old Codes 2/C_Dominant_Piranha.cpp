#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        bool f = false;
        for (ll i = 1; i < n; i++)
        {
            if(v[0]!=v[i])
            {
                f = true;
                break;
            }
        }
        if(!f) cout<<"-1\n";
        else
        {
            ll ma = *max_element(v.begin(),v.end());
            for (ll i = 0; i <n; i++)
            {
                if(v[i] == ma)
                {
                    if(i-1>=0 && v[i-1]<v[i])
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                    else if(i+1<n && v[i+1]<v[i])
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}