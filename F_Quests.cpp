#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
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

void asikM(){
    ll n,c,d;
    cin>>n>>c>>d;
    vector <ll> v(n);
    for (auto& x:v) cin >>x;
    sort(allr(v)); 
    ll s=0;
    for(int i=0;i<min(n,d);i++) s+=v[i];
    if(s>=c){
        co("Infinity")
        return;
    }
    auto ch=[&](ll k){
        if(k==0) return (v[0]*d>=c);
        ll s=0;
        if(k>=n) s=accumulate(all(v),0LL);
        else for(int i=0;i<k;i++) s+=v[i];
        ll total=d/k;
        total*=s;
        ll rem=d%k;
        if(rem>=n) forni total+=v[i];
        else for(int i=0;i<rem;i++) total+=v[i];
        return (total>=c);
    };
    ll ans=-1,l=0,r=1e12,m;
    while(l<=r){
        m=(l+r)/2;
        if(ch(m)){
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }
    if(ans==-1) co("Impossible")
    else co(ans-1)
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