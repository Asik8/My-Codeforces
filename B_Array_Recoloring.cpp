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
ll n,k;
bool ch(int i){
    return(i>=0 && i<n);
}

void asikM(){
    cin >> n>>k;
    vector <pi> v;
    vec(bool) in(n+5,false);
    forni{
        ll x;
        cin>>x;
        v.pb({x,i});
    }
    ll s=0;
    sort(allr(v));
    // for(auto [x,y]:v){
    //     cout<<x<<" "<<y<<el
    // }
    vec(ll) idxs;
    fl(i,0,k){
        s+=v[i].first;
        in[v[i].second]=true;
        idxs.pb(v[i].second);
    }
    for(auto x:idxs){
        if(ch(x-1) && !in[x-1]){
            idxs.pb(x-1);
            in[x-1]=true;
        }
        if(ch(x+1) && !in[x+1]){
            idxs.pb(x+1);
            in[x+1]=true;
        }
    }
    flx(idxs)
    co(s)
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