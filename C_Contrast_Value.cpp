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
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll ct=0;
    fl(i,1,n) ct+=abs(v[i]-v[i-1]);
    // co(ct)
    vec(ll)a,b(n,0);
    a.pb(v[0]);
    fl(i,1,n) if(v[i]!=v[i-1]) a.pb(v[i]);
    // flx(a)
    for(int i=1;i<sz(a)-1;i++){
        if(a[i-1]<a[i] && a[i]<a[i+1]) b[i]=-1;
        else if(a[i-1]>a[i] && a[i]>a[i+1]) b[i]=-1;
    }
    ll c=0;
    fl(i,0,sz(a)) if(b[i]==0) c++;
    co(c)
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