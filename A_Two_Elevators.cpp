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
    cin>>t;
    while(t--){
        ll a,b,c,l=0;
        cin>>a>>b>>c;
        if(b>c) l=b-c+c;
        else l=c-b+c;
        if(l==a) cout<<"3\n";
        else if(l>a) cout<<"1\n";
        else cout<<"2\n";
    }
    return 0;
}