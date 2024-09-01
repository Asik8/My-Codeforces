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
        ll l,r;
        cin >> l>>r;
        vector <ll> v;
        ll val = l,i=1;
        v.pb(val);
        while(val<= r)  
        {
            val = v.back()+i;
            i++;
            if(val<=r) v.pb(val);
            else break;
        }     
        cout<<v.size()<<endl;
    }
    return 0;
}