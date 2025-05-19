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
    // ll n;
    // cin >> n;
    vector <ll> a(4);
    for (auto& x:a) cin >>x; 
    set<ll>s;
    s.insert(a[0]+a[1]);
    s.insert(a[2]-a[1]);
    s.insert(a[3]-a[2]);
    ll ans=0;
    for(auto x:s){
        ll c=0;
        if(x==(a[0]+a[1])) c++;
        if((a[2]==(a[1]+x))) c++;
        if((a[3]==(a[2]+x))) c++;
        ans=max(ans,c);
    }
    // co(sz(s))
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