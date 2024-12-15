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
        ll n;
        cin >> n;
        vector <ll> v;
        for (int i=0;i<n;i++){
            ll x;
            cin >>x;
            v.pb(x);
        }       
        if(v[0] != n) pn
        else{
            vector<ll> a;
            for(int i=n;i>=1;i--){
                while(a.size()<v[i-1])
                    a.pb(i);
            }
            bool f= true;
            for(int i=0;i<n;i++){
                if(a[i] != v[i]){
                    pn
                    f = false;
                    break;
                }
            }
            if(f) py
        }
    }
    return 0;
}