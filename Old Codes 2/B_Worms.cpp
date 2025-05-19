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
    ll n,m;
    cin >> n;
    vector <ll> v(n),p(n);
    for (auto& x:v) cin >>x; 
    p[0]=v[0];
    f(i,1,n) p[i]=v[i]+p[i-1];
    cin>>m;
    while(m--){
        ll x,l=0,r=n-1,in=1;
        cin>>x;
        while(l<=r){
            ll m=(l+r)/2;
            if(p[m]>=x){
                in=m;
                r=m-1;
            }
            else l=m+1;
        }
        co(in+1)
    }
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