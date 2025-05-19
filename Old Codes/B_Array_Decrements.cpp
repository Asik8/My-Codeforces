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
        bool f=true;
        ll x=-1;
        forni x=max(x,llabs(a[i]-b[i]));
        forni a[i]=max(0LL,(a[i]-x));
        forni{
            if(a[i]!=b[i]){
                f=false;
                break;
            }
        }
        if(f) py else pn
    }
    return 0;
}