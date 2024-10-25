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
        vector <ll> v(n);
        for (auto& x:v) cin >>x,x--;   
        vector<bool> f(n,0);
        ll ans=0;
        for(int i=0;i<n;i++){
            if(f[i]) continue;
            ll c=0;
            for(int j=i;!f[j];j = v[j]){
                c++;
                f[j] = 1;
            }
            ans+=(c-1)/2;
        }    
        cout<<ans<<endl;
    }
    return 0;
}