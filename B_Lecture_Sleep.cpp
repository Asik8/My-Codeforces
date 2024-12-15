#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni1 for(int i=1;i<n;i++)
#define forni for(int i=0;i<n;i++)
const int N=1e6+50;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<ll>a(N),p(N);
    forni cin>>a[i];
    ll c=0,s=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==1){
            s+=a[i];
            a[i]=0;
        }
        p[i+1]=p[i]+a[i];
    }
    for(int i=0;i<=n;i++){
        c=max(c,p[i+k]-p[i]);
    }
    cout<<c+s<<endl;
    return 0;
}