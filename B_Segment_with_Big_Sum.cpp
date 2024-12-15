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
    ll n,k;
    cin >>n>>k;
    vector <ll> v(n);
    for (auto& x:v) cin >>x;  
    ll l=0,r=0,s=0,c=INT_MAX;
    while(r<n){
        s+=v[r];
        while(s>=k){
            c=min(c,r-l+1);
            s-=v[l];
            l++;
        }
        r++;
    }     
    if(c<INT_MAX)cout<<c<<endl;
    else cout<<"-1\n";
    return 0;
}