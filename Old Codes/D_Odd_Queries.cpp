#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,q;
        cin >> n>>q;
        vector <ll> v(n),preSum (n,0);
        cin>>v[0];
        preSum[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            cin >> v[i]; 
            preSum[i] = preSum[i-1]+v[i];
        }
        while(q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            l--;
            r--;
            ll sum = preSum[n-1];
            if(l>0) sum -= (preSum[r]-preSum[l-1]); 
            else if(l==0) sum -= preSum[r]; 
            sum+= (r-l+1)*k;
            if(sum%2==0) cout<<"NO\n";
            else cout<<"YES\n";
        }      
    }

    return 0;
}