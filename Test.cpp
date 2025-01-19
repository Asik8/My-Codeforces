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
    ll l=n;
    map<int,int>mp;
    for(int i=2;i*i<=n;i++){
        while(!(l%i)){
            mp[i]++;
            l/=i;
        }
    }
    if(l>1) mp[l]++;
    ll s=1;
    for(auto x:mp){
        ll tmp=0;
        ll a=x.first;
        ll b=x.second;
        for(int i=0;i<=b;i++){
            tmp+=pow(a,i);
        }
        s*=tmp;
    }
    co(s)
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