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
    string s;
    vec(pi)v;
    vec(ll)ps(2*n+1,0),fr(2*n+1,0);
    forni{
        ll l,r;
        cin>>l>>r;
        v.pb({l,r});
        if(l==r){
            ps[l]=1;
            fr[l]++;
        }
    }
    fl(i,1,sz(ps))ps[i]+=ps[i-1];
    // flx(ps)
    // flx(fr)
    // co(sz(v))
    for(auto[l,r]:v){
        if(l==r){
            if(fr[l]>1) s+='0';
            else s+='1';
        } else{
            ll lim=ps[r]-ps[l-1];
            if(lim< (r-l+1)) s+='1';
            else s+='0';
        }
    }
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