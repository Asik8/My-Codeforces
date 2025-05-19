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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    unordered_map<ll,ll>mp;
    while (t--){
        ll n;
        cin >> n;
        for(int i=2;i<=sqrt(n);i++){
            if(!(n%i)) mp[i]++;
            while(!(n%i)) n/=i;
        }       
        if(n>1)mp[n]++;
    }
    ll c=1;
    for(auto [x,y]:mp) c=max(c,y);
    co(c)
    return 0;
}