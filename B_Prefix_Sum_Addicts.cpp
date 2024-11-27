#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"Yes\n";
#define pn cout<<"No\n";
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
        cin>>n>>k;
        vector <ll> v(n+1),a(n+1);
        for(int i=n-k+1;i<=n;i++) cin>>v[i];
        if(k==1){
            py
            continue;
        }   
        for(int i=n-k+2;i<=n;i++) a[i]=v[i]-v[i-1];
        if(!is_sorted(a.begin()+n-k+2,a.end())){
            pn
            continue;
        }
        if(v[n-k+1]>a[n-k+2]*(n-k+1)) {
            pn
            continue;
        }
        py
    }
    return 0;
}