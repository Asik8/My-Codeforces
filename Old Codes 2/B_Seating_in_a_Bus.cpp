#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;  
        bool f = false;
        ll l=v[0],r=v[0];
        for(int i=1;i<n;i++)
        {
            if(v[i] == l-1) l--;
            else if(v[i] == r+1) r++;
            else
            {
                f = true;
                break;
            }
        }   
        if(f)pn
        else py  
    }
    return 0;
}