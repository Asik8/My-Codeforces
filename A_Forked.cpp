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
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll a,b,xk,yk,xq,yq,c=0;
    cin >> a>>b>>xk>>yk>>xq>>yq;
    vec(ll) d1={-a,-a,a,a,b,b,-b,-b};
    vec(ll) d2={-b,b,-b,b,a,-a,a,-a};
    set<pi> s1,s2;
    f(i,0,8) s1.insert({xk+d1[i],yk+d2[i]});
    f(i,0,8) s2.insert({xq+d1[i],yq+d2[i]});
    for(auto x:s1){
        if(s2.count(x)) c++;
    }
    co(c)
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