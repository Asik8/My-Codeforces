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
    string s;
    cin>>s;
    ll n=s.size(),h=0;
    ll a[n];
    forni if(s[i]=='r') a[h++]=i+1;
    fr(i,n-1,0) if(s[i]=='l') a[h++]=i+1;
    forni cout<<a[i]<<endl;
    return 0;
}