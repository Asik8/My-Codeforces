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

void asikM(){
    string s;
    cin>>s;
    ll n=sz(s),in=0,l,r,mx=0;
    while(in<n  && s[in]=='1') in++;
    if(in==n){
        cout<<1<<' '<<1<<" "<<1<<' '<<n<<el
        return;
    }
    vector<pair<string,pair<ll,ll>>>v;
    ll nd=n-in;
    fl(i,0,in,1){
        string t;
        fl(j,0,nd,1){
            if(s[j+in]==s[j+i]) t+='0';
            else t+='1';
        }
        v.pbk({t,{i+1,i+nd}});
    }
    auto it=*max_element(all(v));
    cout<<1<<" "<<n<<' '<<it.second.first<<" "<<it.second.second<<el
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