#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
const ll N = 1e19;

ll Cal_Root(ll n){
    ll x = sqrt(n)+2;
    while(x*x>n) x--;
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll k;
        cin>>k;
        ll l=0,r=N,ans=0;
        while(l<=r){
            ll mid = (l+r)/2;
            ll root = Cal_Root(mid);
            if(mid-root>=k){
                ans = mid;
                r = mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}