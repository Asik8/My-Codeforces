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
        ll l=n/2;
        vector <vector<ll>> v(l+1);
        vector<bool> a(n+1,false);
        for(int i=l;i>0;i--){
            for(int j=i;j<=n;j+=i){
                if(!a[j]){
                    v[i].pb(j);
                    a[j] = true;
                }
            }
        }
        vector<ll> ans;
        vector<bool> vis(n+1,false);
        for(int i=1;i<=l;i++){
            if(!vis[i]){
                for(int j=i;j<=l;j*=2){
                    vis[j] = true;
                    for(auto b:v[j]) ans.pb(b);
                }
            }
        }
        for(ll x:ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}