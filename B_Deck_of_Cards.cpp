#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1;
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(count(all(s),'2')==n){
        if(k==1)co('-')
        else forni cout<<'?';
        return;
    }
    vector<char>v(n,'+');
    ll l=0,r=n-1,c=0;
    fl(i,0,k,1){
        if(s[i]=='1') v[r--]='-';
        else if(s[i]=='0') v[l++]='-';
        else c++;
    }
    ll x=c;
    while(v[l]=='+' && x) {v[l++]='?'; x--;}
    x=c;
    while(v[r]=='+' && x) {v[r--]='?'; x--;}
    acv(v,x) ct(x)
    elc
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}