#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--) {
        ll n,P,tp,t;
        cin>>n>>P>>tp>>t;  
        ll task = ((n+6)/7);
        ll l=0,r=n,ans= n;
        while(l<=r)
        {
            ll mid = (l+r)/2;
            ll tasks = min(2*mid,task);
            ll total = (mid*tp)+(tasks*t);
            if(total>=P)
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        cout<<n-ans<<endl;
    }
    return 0;
}