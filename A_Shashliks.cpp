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
    ll k,a,b,x,y,c=0,ans=0;
    cin>>k>>a>>b>>x>>y;
    ll l=k;
    if(k>=a){
        ll cnt=((k-a)/x+1);
        c+=cnt;
        k-=x*cnt;
    }
    if(k>=b){
        ll cnt=((k-b)/y+1);
        c+=cnt;
        k-=y*cnt;
    }
    ans=max(ans,c);
    c=0;
    k=l;
    if(k>=b){
        ll cnt=((k-b)/y+1);
        c+=cnt;
        k-=y*cnt;
    }
    if(k>=a){
        ll cnt=((k-a)/x+1);
        c+=cnt;
        k-=x*cnt;
    }
    ans=max(ans,c);
    co(ans)
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