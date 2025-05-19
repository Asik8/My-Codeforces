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
        set<ll>s;
        for(int i=1;i<=n;i++) s.insert(i);
        vector<ll> ans;
        while(!s.empty()){
            ll v = *s.begin();
            while(v<=n){
                ans.pb(v);
                s.erase(v);
                v*=2;
            }
        }
        for(ll x:ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}