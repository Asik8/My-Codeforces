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
        vector <ll> pos(n+1,0);
        for(ll i=1;i<=n;i++){
            ll x;
            cin>>x;
            pos[x] = i;
        }    
        ll c=0;
        for(ll i=2;i<=n;i++){
            if(pos[i]<pos[i-1])c++;
        }
        cout<<c<<endl;
    }
    return 0;
}