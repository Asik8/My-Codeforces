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
    ll n,k,c=0;
    cin>>n>>k;
    vec(ll)a(n),b(n);
    for(auto& x:a) cin>>x; 
    for(auto& x:b) cin>>x; 
    set<ll>s;
    forni{
        if(b[i]!=-1) s.insert(a[i]+b[i]);
        else c++;
    }    
    if(c==n){
        ll mx=*max_element(all(a)),mn=LLONG_MAX;
        for(auto x:a) mn=min(mn,x+k);
        if(mn<mx){
            co(0)
            return;
        }
        co(max(0LL,mn-mx+1))
        return;
    }
    if(sz(s) != 1){
        co(0)
        return;
    }
    ll l=*s.begin();
    forni{
        c=0;
        if(b[i]==-1){
            c=l-a[i];
            if(c<0 || c>k){
                co(0)
                return;
            }
        }
    }
    co(1)
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
