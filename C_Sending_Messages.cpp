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
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        vector <ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        ll m = 0;
        for(int i=0;i<n;i++)
        {
            f -= min((v[i]-m)*a,b);
            m = v[i];
        }
        if(f>0) py;
        else pn;
    }
    return 0;
}