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

ll bsr(ll k){
    ll l=0,r=500,m;
    while(l<r){
        m=(l+r+1)/2;
        if((m*(m-1))/2 >k) r= m-1;
        else l=m;
    }
    return l;
}

void asikM(){
    ll n,l=0,r=0;
    cin >> n;
    vector <pi> v;
    while(n){
        auto c=bsr(n);
        f(i,0,c) v.pb({l,r++});
        l++;
        n-=((c*(c-1))/2);
    }
    co(sz(v))
    for(auto [x,y]:v) cout<<x<<" "<<y<<el
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