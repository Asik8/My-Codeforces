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
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    auto ch=[&](ll m){
        ll c=0;
        for(int i=n/2;i<n;i++){
            if(v[i]<m) c+=m-v[i];
            if(c>k) return false;
        }
        return c<=k;
    };
    sort(v.begin(),v.end());
    ll l=0,r=2e9,ans=0;
    while(l<=r){
        ll m=l+(r-l)/2;
        if(ch(m)){
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }
    co(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    asikM();      
    return 0;
}