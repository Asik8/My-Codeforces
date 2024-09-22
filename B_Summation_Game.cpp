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
        int n,k,x;
        cin>>n>>k>>x;
        vector <ll> v(n+1);
        for (int i=1;i<=n;i++) cin >>v[i];    
        sort(v.begin(),v.end());
        ll p_Sum[n+1]={0};
        p_Sum[1] = v[1];
        for(int i=2;i<=n;i++) p_Sum[i] = p_Sum[i-1]+v[i];
        ll ans = INT_MIN;
        for(int i=n;i>=0;i--)
        {
            int in = n-i;
            if(in>k) break;
            ll p = min(i,x);
            ll s = (p_Sum[i-p]-(p_Sum[i]-p_Sum[i-p]));
            ans = max(ans,s);
        }
        cout<<ans<<endl;
    }
    return 0;
}