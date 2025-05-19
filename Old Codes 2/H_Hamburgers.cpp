#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define pb push_back
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
    string s;
    ll nb,ns,nc,pb,ps,pc,total,rb=0,rs=0,rc=0;
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>total;
    for(auto x:s){
        if(x=='B') rb++;
        else if(x=='S') rs++;
        else rc++;
    }
    ll l=0,r=1e15,m;
    auto ch=[&](ll m){
        ll x=m*rb;
        ll y=m*rs;
        ll z=m*rc;
        ll c=0;
        c+=max(x-nb,0LL)*pb;
        c+=max(y-ns,0LL)*ps;
        c+=max(z-nc,0LL)*pc;
        return c<=total;
    };
    while(l+1<r){
        m=(l+r)/2;
        if(ch(m)) l=m;
        else r=m;
    }
    co(l)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}