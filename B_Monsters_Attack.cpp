#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n"
#define pn cout<<"NO\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector <ll> h(n),pos(n+1,0);
        for (auto& x:h) cin >>x; 
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            pos[abs(x)] += h[i]; 
        }      
        ll b = k;
        bool f = true;
        for(int i=1;i<=n;i++)
        {
            b -= pos[i];
            if(b<0) f = false;
            b+=k;
        }
       if (f) py;
       else pn;
    }
    return 0;
}