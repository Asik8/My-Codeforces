#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v;
        int l=1,r=n;
        while(l<=r)
        {
            if(l==r) v.pb(l);
            else
            {
                v.pb(l);
                v.pb(r);
            }
            l++;
            r--;
        }    
        for (ll c:v) cout<<c<<" ";
        cout<<endl;   
    }
    return 0;
}