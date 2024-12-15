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
        ll n,m;
        cin >> n>>m;
        vector <ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        ll sum =0,in=0,ans=0;
        for(int i=0;i<n;i++)
        {
            sum+= v[i];
            while(sum>m || (in<n && v[i]-v[in]>1))
            {
                sum-=v[in];
                in++;
            }
            ans=max(sum,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}