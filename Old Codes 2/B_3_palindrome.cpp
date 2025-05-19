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
    ll n;
    cin>>n;
    string s;
    if(n<3){
        forni s+='a';
    }
    else{
        ll l=n/2;
        f(i,0,l){
            if(i%2) s+="bb";
            else s+="aa";
        }
        if(n%2 && l%2) s+='b';
        else if(n%2 && !(l%2)) s+='a';
    }
    co(s)
    return 0;
}