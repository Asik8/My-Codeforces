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
        ll n;
        cin >> n;
        vector <ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            if(i%2==0)v.pb(x);
        }     
        cout<<*max_element(v.begin(),v.end())<<endl;
    }
    return 0;
}