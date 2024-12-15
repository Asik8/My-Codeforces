#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(ll i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,x;
        cin >> n>>x;
        vector <ll> v(n),p(n);
        for (auto& x:v) cin >>x;
        p[0]=v[0];
        for(int i=1;i<n;i++) p[i]=v[i]+p[i-1];
        ll ans=-1,l=0,r=n-1;
        forni{
            if((p[i]%x)){
                ans=max(ans,i+1);
            }
        }
        while(l<r){
            if((p[r]-p[l])%x) ans=max(ans,r-l);
            l++;
        }
        cout<<ans<<endl;
    }
    return 0;
}