#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py {cout<<"YES\n"; return;}
#define pn {cout<<"NO\n"; return;}
#define pys cout<<"Yes\n";
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
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vec(int)p(n,0);
    if(a==b) py
    fl(i,0,n,1){
        if(i==0) p[i]=(a[i]=='0')?1:-1;
        else p[i]=p[i-1]+((a[i]=='0')?1:-1);
    }
    // flx(p)
    ll oz=0,zo=0,flips=0,r=n-1;
    while(a[r]==b[r]) r--;
    while(r>=0){
        if(flips&1){
            if(a[r]=='0') a[r]='1';
            else a[r]='0';
        }
        if(a[r]!=b[r]){
            if(p[r]==0) flips++;
            else pn
        }
        r--;
    }
    py
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