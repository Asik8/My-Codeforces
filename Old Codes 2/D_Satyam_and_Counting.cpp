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
    ll n;
    cin >> n;
    map<ll,ll>m1,m0;
    forni{
        ll x,y;
        cin>>x>>y;
        if(y==0) m0[x]++;
        else m1[x]++;
    } 
    ll c=0;
    for(auto [x,y]:m0){
        if(m1.count(x)) c+=(n-2);
    }
    for(auto [x,y]:m0){
        ll l1=x-1,l2=x+1;
        if(m1.find(l1) != m1.end() && m1.find(l2) != m1.end()) c++;
    }
    for(auto [x,y]:m1){
        ll l1=x-1,l2=x+1;
        if(m0.find(l1) != m0.end() && m0.find(l2) != m0.end()) c++;
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