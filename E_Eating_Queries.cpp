#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n,k;
    cin >> n>>k;
    vector <ll> v(n),p;
    for (auto& x:v) cin >>x; 
    sort(v.begin(),v.end(),greater<ll>());
    ll s=0;
    forni{
        p.pb(s+v[i]);
        s=p.back();
    }
    // for(auto x:p) cout<<x<<" ";
    // cout<<endl;
    // co(l)
    while(k--){
        ll x;
        cin>>x;
        ll l=0,r=n-1,ans=-1;
        while(l<=r){
            ll m=(l+r)/2;
            if(p[m]>=x){
                ans=m+1;
                r=m-1;
            }
            else l=m+1;
        }
        co(ans)
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}