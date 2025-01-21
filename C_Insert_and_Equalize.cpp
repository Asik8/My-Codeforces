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
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    if(n==1){
        co(1)
        return;
    }
    sort(v.begin(),v.end());
    ll g=0,s=0,c=0;
    f(i,0,n)g=__gcd(g,v[n-1]-v[i]);
    forni s+=(v[n-1]-v[i])/g;
    ll x=v[n-1]-g;
    for(int i=n-2;i>=0;i--){
        if(x!=v[i]) break;
        x-=g;
        c++;
    }
    co(s+c+1)
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