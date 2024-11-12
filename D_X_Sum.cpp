#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

bool check(ll n,ll m,ll i,ll j){
    return (i>=0 && i<n && j>=0 && j<m);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        f(i,0,n){
            f(j,0,m){
                cin>>a[i][j];
            }
        }   
        ll mx=INT_MIN;
            
    }
    return 0;
}