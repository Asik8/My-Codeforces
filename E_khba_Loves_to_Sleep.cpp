#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>v(n);
    for(auto& x:v)cin>>x;
    sort(all(v));
    auto ch=[&](ll d){
        vec(ll) ans;
        for(ll p=0;p<=x && sz(ans)<k;p++){
            ll i=upper_bound(all(v),p)-v.begin();
            if(i<n && v[i]-p<d){
                p=max(p,v[i]+d-1);
                continue;
            }
            if(i>0 && p-v[i-1]<d){
                p=max(p,v[i-1]+d-1);
                continue;
            }
            ans.pbk(p);
        }
        return ans;
    };
    ll l=0,r=x+1;
    while(r-l>1){
        ll m=(l+r)/2;
        (sz(ch(m))==k?l:r)=m;
    }
    flx(ch(l))
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}

