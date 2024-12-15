#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
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
        vector<ll>v;
        ll l=1,r=n*n;
        while(l<r){
            v.pb(r);
            v.pb(l);
            r--;
            l++;
        }
        if(n%2) v.pb(((n*n)+1)/2);
        l=0;
        for(int i=0;i<=(n*n)-n;i+=n){
            if(l%2) reverse(v.begin()+i,v.begin()+i+n);
            l++;
        }
        l=1;
        for(int i=0;i<n*n;i++){
            cout<<v[i]<<" ";
            if(!(l%n)) cout<<"\n";
            l++;
        }
    }
    return 0;
}