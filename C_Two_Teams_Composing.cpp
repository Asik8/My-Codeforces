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
    map<ll,ll>m;
    vector <ll> v(n);
    for (auto& x:v){
        cin >>x; 
        m[x]++;
    }
    ll mx=INT_MIN,s=sz(m);
    for(auto [x,y]:m) mx=max(mx,y);
    auto ch=[&](ll mid){
        if((s>mx || mx>s) && mid<=min(mx,s)) return true;
        else if(sz(m)==mx && mid<mx) return true;
        return false;
    };
    ll ans=0,r=s,l=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(ch(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    co(ans)
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