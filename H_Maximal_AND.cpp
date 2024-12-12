#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >> n>>k;
        vector <ll> v(n),b(31);
        for (auto& x:v) cin >>x;
        for(int i=0;i<n;i++){
            for(int k=30;k>=0;k--){
                if((v[i]>>k)&1){
                    b[k]++;
                }
            }
        } 
        ll ans=0;
        for(int i=30;i>=0;i--){
            if(b[i]==n) ans+=(1LL<<i);
            else{
                if(k>=(n-b[i])){
                    ans+=(1LL<<i);
                    k-=(n-b[i]);
                }
            }
        }
        co(ans)
    }
    return 0;
}