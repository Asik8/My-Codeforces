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
    ll n,r,b;
    cin >> n>>r>>b;
    // string s;
    ll d=0;
    if(b==1) d=(r+1)/2;
    else d=r/b;
    ll nd=d;
    fl(i,1,nd){
        ll x=i*b;
        ll y=r-x;
        if(y<=b) d=min(d,(ll)i);
    }
    if(r==((b+1)*(b+1))) d=b+1;
    // ll d=r/(b+1);
    ll t=(r+(d-1))/d;
    while(t--){
        fl(i,0,min(r,d)) cout<<'R';
        r-=d;
        if(b){
            cout<<'B';
            b--;
        }
    }
    elc
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