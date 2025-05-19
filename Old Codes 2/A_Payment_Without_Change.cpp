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
        ll n,a,b,s;
        cin>>a>>b>>n>>s;
        ll l=(a*n)+b;
        if(s>l) pn
        else{
            if(a*n>=s && s%n<=b) py
            else if(a*n<s && s%n<=b) py
            else pn
        }       
    }
    return 0;
}