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
        for (auto &x : v) cin >> x;
        sort(v.begin(),v.end());
        bool f = true;
        vector <ll> x;
        for(int i=1;i<n;i++)
        {
            if(v[i]%v[0] != 0)x.pb(v[i]);
        }
        for(int i=1;i<x.size();i++)
        {
            if(x[i]%x[0] != 0) 
            {
                f = false;
                break;
            }
        }
        if(f) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}