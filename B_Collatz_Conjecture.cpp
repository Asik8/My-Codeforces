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
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll x,y,k;
    cin>>x>>y>>k;
    while(k>0 && x!=1){
        ll c=(x/y+1)*y-x;
        c=max(1LL,c);
        c=min(c,k);
        x+=c;
        while(!(x%y)) x/=y;
        k-=c;
    } 
    co((x+k%(y-1)))
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        asikM();      
    }
    return 0;
}