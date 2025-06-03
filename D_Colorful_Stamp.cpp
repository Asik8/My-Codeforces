#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n;
    cin >> n;
    string s,st;
    cin>>s;
    ll l=0,r=0;
    while(r<n){
        if(s[r]=='B')st+='B';
        while(s[r]=='B') r++;
        if(s[r]=='R') st+='R';
        while(s[r]=='R') r++;
        if(s[r]=='W') st+='W';
        while(s[r]=='W') r++;
    }
    // co(st)
    n=sz(st);
    if(n==2 && st=="RW" || st=="WR" || st=="BW" || st=="WB"){
        pn
        return;
    }
    if(n==1 && st=="B" || st=="R"){
        pn
        return;
    }
    if(n==1 && st=="W"){
        py
        return;
    }
    vec(ll)in;
    while(l<n){
        if(st[l]=='W') in.pb(l);
        l++;
    }
    if(sz(in)==0 && n>1){
        py
        return;
    }
    fl(i,1,sz(in)){
        ll len=in[i]-in[i-1]+1;
        if((len-2)==1){
            pn
            return;
        }
    }
    // co(n)
    if(sz(in)>0 && in[0]==1 || in.back()==n-2){
        pn
        return;
    }
    // flx(in)
    py
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}