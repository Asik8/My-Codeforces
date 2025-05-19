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
        ll n,sum=0;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) 
        {
            cin >>x; 
            sum+=x;
        }
        if(n==1 || n==2)
        {
            cout<<"-1\n";
            continue;
        }     
        ll l=0,r=1e18,ans=-1;
        while(l<=r)
        {
            ll mid = (l+r)/2;
            ll avg = (mid+sum+n-1)/n;
            ll half;
            if(avg%2) half = (avg+1)/2;
            else half = avg/2;
            ll c=0;
            for(int i=0;i<n;i++) if(v[i]<half)c++;
            ll a = n/2;
            if((a<c&& !n%2) || (a+1)<=c)
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}