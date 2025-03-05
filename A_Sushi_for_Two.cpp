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
#define flx(x1) for(auto [x,y]:x1) cout<<x<<" "<<y<<el elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    map<ll,ll>m;
    vec(pi)in;
    for(int i=0;i<n;){
        if(v[i]==1){
            ll x=i;
            while(v[i]==1){
                m[1]++;
                i++;
            }
            in.pb({x,m[1]});
            m.clear();
        }
        else i++;
    }
    // flx(in)
    ll c=0;
    for(int i=0;i<sz(in);i++){
        auto x=in[i].first,y=in[i].second;
        ll l=x-1,r=(x+y);
        // co(l)
        // co(r)
        ll c1=0,c2=0;
        while(v[l]==2){
            c1++;
            l--;
        }
        while(v[r]==2){
            c2++;
            r++;
        }
        c=max(c,min(y,max(c1,c2)));
    }
    co(c*2)
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