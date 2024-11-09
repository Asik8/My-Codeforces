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
        vector <char> s(n+2);
        s[0]='!';
        s[n+1]='!';
        f(i,1,n+1) cin>>s[i];
        vector<ll>in;
        in.pb(0);    
        f(i,0,n+2) if(s[i]=='L') in.pb(i);
        in.pb(n+1);
        bool f=true;
        f(i,0,in.size()-1){
            if(in[i+1]-in[i]>(m+k)){
                f = false;
                break;
            }
        }
        if(f){
            ll l=in[in.size()-2];
            f(i,l+m,min(l+k+1,n+2)) if(s[i]=='C'){
                f=false;
                break;
            }
        }
        if(f)py else pn
    }
    return 0;
}