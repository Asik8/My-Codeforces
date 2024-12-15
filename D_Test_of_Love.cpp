#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,m,k;
        cin >>n>>m>>k;
        string s;
        cin>>s;
        ll c=m-1,swim=0,cr=0;
        for(auto x:s){
            if(x=='L') c=m;
            if(x=='W'&&c<=0) swim++;
            if(x=='C'&&c<=0) cr++;
            c--;
        }
        if(swim>k) cr++;
        if(cr) pn else py
    }
    return 0;
}