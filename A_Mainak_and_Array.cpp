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
    ll n,mn=INT_MAX,mx=INT_MIN;
    cin >> n;
    vector <ll> v(n);
    map<ll,vec>mp;
    for (auto& x:v){
        cin >>x; 
        mn=min(mn,x);
        mx=max(mx,x);
    }
    if(n==1){
        co(0)
        return;
    }
    forni{
        if(v[i]==mn) mp[mn].pb(i);
        if(v[i]==mx) mp[mx].pb(i);
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