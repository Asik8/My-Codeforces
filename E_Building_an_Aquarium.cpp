#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(ll i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n,lm;
    cin >> n>>lm;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll l=1,r=1e10,m,ans=0;
    while(l<=r){
        ll s=0;
        m=(l+r)/2;
        forni{
            if(v[i]<=m){
                s+=(m-v[i]);
            }
        }
        if(s<=lm){
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
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}