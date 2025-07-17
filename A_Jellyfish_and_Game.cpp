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
    ll n,m,k,i=0;
    cin >> n>>m>>k;
    vector <ll> a(n),b(m);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    if(k>10) k-=(k-10)/2*2;
    for(int i=1;i<=k;i++){
        sort(all(a));
        sort(all(b));
        if((i&1) && a[0]<b.back()) swap(a[0],b.back());
        else if(!(i&1) && b[0]<a.back()) swap(b[0],a.back());
    }
    co(accumulate(all(a),0LL))
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