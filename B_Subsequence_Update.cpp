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
#define all(x) x.begin(),x.end()
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n,l,r;
    cin>>n>>l>>r;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll ran=(r-l+1);
    vec a,b;
    f(i,0,r) a.pb(v[i]);
    f(i,l-1,n) b.pb(v[i]);
    sort(all(a));
    sort(all(b));
    ll s1=0,s2=0;
    f(i,0,ran){
        s1+=a[i];
        s2+=b[i];
    }
    co(min(s1,s2))
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