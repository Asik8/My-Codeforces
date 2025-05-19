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
        ll n,c=0,pmax=0,mx=0;
        cin >> n;
        vector <ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i]; 
        for(int i=0;i<n;i++)
        {
            pmax = max(pmax,v[i]);
            ll d = pmax-v[i];
            c+= d;
            mx = max(mx,d);
        }   
        cout<<c+mx<<endl;   
    }

    return 0;
}