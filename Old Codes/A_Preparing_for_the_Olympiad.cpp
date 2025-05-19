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
        ll n;
        cin >> n;
        vector <ll> a(n),b(n);
        for (auto& x:a) cin >>x;       
        for (auto& x:b) cin >>x;  
        ll s1=0,s2=0;
        forni s1+=a[i];
        f(i,1,n) s2+=b[i];
        for(int i=0;i<n-1;i++){
            ll x=s1-a[i];
            ll y=s2-b[i+1];
            if((s1-s2)<(x-y)){
                s1=x;
                s2=y;
            }
        }     
        co(s1-s2)
    }
    return 0;
}