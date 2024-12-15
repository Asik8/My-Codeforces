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
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<ll>());
        ll c=0,l1=0,l2=0,r1=n-1,r2=m-1;
        while(l1<=r1)
        {
            ll l = llabs(a[l1]-b[l2]);
            ll r = llabs(a[r1]-b[r2]);
            c+= max(l,r);
            if(max(l,r) == l) 
            {
                l1++;
                l2++;
            }
            else 
            {
                r1--;
                r2--;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}