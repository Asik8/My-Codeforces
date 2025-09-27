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
const ll N=1e5;

void asikM(){
    ll n,m;
    cin >> n>>m;
    set<ll>wh,bl;
    string s;
    cin>>s;
    fl(i,1,(2*(m+n))+1) wh.insert(i);
    fl(i,0,m){
        ll x;
        cin>>x;
        bl.insert(x);
        wh.erase(x);
    }
    ll l=1;
    forni{
        if(s[i]=='A'){
            l++;
            if(wh.count(l)){
                wh.erase(l);
                bl.insert(l);
            }
        } else{
            l=*wh.upper_bound(l);
            ll x=l;
            l=*wh.upper_bound(l);
            wh.erase(x);
            bl.insert(x);
        }
    }
    co(sz(bl))
    flx(bl)
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