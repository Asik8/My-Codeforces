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
#define ct(x1) cout<<x1<<" ";
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
set<ll>st;
bool is_pal(ll l,ll r,string s){
    string ns;
    fl(i,0,sz(s),1){
        if(i<l && i>r) r+=s[l];
    }
}

void asikM(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool f=true;
    fl(i,0,n-1,1){
        if(s[i]>s[i+1]){
            f=false;
            break;
        }
    }
    if(f){
        co(n)
        forni ct(i+1)
        elc
        return;
    }
    ll l=0,r=n-1;
    while(l<r && s[l]==s[r]){
        l++;
        r--;
    }
    vec(ll)ans;
    fl(i,l,r+1,1){
        if(s[i]=='1') ans.pbk(i+1);
    }
    co(sz(ans))
    flx(ans)
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