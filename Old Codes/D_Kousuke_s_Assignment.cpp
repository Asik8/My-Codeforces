#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        set<ll>s{0};
        ll c=0,ans=0;
        while(n--){
            ll x;
            cin>>x;
            c+=x;
            if(s.count(c)){
                ans++;
                c=0;
                s.clear();
            }
            s.emplace(c);
        }   
        cout<<ans<<endl;
    }
    return 0;
}