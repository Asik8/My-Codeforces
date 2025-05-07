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

void up(string &s,ll l){
    for(int i=0;i<l;i++) if(s[i]=='?') s[i]='0';
    for(int i=l;i<sz(s);i++) if(s[i]=='?') s[i]='1';
}
void up2(string &s,ll l){
    s[l]='0';
}
void up3(string &s,ll l,char c){
    s[l]=c;
}

void asikM(){
    string s;
    cin>>s;
    ll l=0;
    while(l<sz(s)){
        if(s[l]=='1') break;
        l++;
    } 
    fl(i,1,sz(s)-1){
        if(s[i]=='?' && s[i-1]=='0' && s[i+1]=='0') up2(s,i);
    }
    fl(i,0,sz(s)-1){
        if(s[i]=='0' && s[i+1]=='?') up3(s,i+1,'0');
    }
    // co(l)
    up(s,l);
    co(s)
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