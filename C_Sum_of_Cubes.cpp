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

bool ch(ll t){
    ll l=1,r=1e6;
    while(l<=r){
        ll m=l+(r-l)/2;
        ll x=(m*m*m);
        if(x>t) r=m-1;
        else if(x<t) l=m+1;
        else return true;
    }
    return false;
}

void asikM(){
    ll n;
    cin >> n;
    bool f= false;
    for(ll i=1;(i*i*i)<n;i++){
        ll x=(i*i*i);
        if(ch(n-x)){
            f=true;
            break;
        }
    }
    if(f) py else pn
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