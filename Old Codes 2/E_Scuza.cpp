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
    ll n,q;
    cin >>n>>q;
    vector <ll> v(n),p;
    for (auto& x:v) cin >>x; 
    p.pb(0);
    f(i,0,n) p.pb(v[i]+p.back());
    f(i,1,n) v[i]=max(v[i],v[i-1]);
    while(q--){
        ll x;
        cin>>x;
        int in=upper_bound(v.begin(),v.end(),x)-v.begin();
        cout<<p[in]<<" ";
    }
    cout<<endl;
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