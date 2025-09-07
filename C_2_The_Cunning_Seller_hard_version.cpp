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

vec(ll) p(30,0);
ll cal(ll x){return p[x+1]+x*p[x-1];}

void asikM(){
    ll n,k,x=0,ans=0;
    cin >> n>>k;
    vec(ll)b(30,0);
    while(n){
        ans+=cal(x)*(n%3);
        k-=(n%3);
        b[x]=(n%3);
        n/=3;
        x++;
    }
    if(k<0){
        co(-1)
        return;
    }
    ll r=0;
    for(int i=29;i>0;i--){
        if(k>1 && b[i]){
            ll t=min(k/2,b[i]);
            k-=(t*2);
            b[i-1]+=3*t;
            r+=t*p[i-1];
        }
    }
    co(ans-r)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    p[0]=1;
    for(int i=1;i<30;i++) p[i]=p[i-1]*3;
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}