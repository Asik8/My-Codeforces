#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py {cout<<"YES\n"; return;}
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
    ll l1,l2,l3,b1,b2,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    ll s=((l1*b1)+(l2*b2)+(l3*b3));
    if(sqrt(s)*sqrt(s)!=s){
        pn
        return;
    }
    s=sqrt(s);
    if(l1==l2 && l1==l3 && l1==s && b1+b2+b3==s) py
    if(b1==b2 && b1==b3 && b1==s && l1+l2+l3==s) py
    if(l3==l2 && b3+b2==s && b1==s && l1+l2==s) py
    if(b3==b2 && l3+l2==s && l1==s && b1+b2==s) py
    pn
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