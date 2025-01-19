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
    map<ll,ll>mp;
    for (auto& x:v){
        cin >>x;
        mp[x]++;
    } 
    vec test(n+1,0);
    f(i,1,n+1){
        if(mp[i]==0) continue;
        for(int j=i;j<=n;j+=i) test[j]+=mp[i];
    }
    sort(test.begin(),test.end());
    co(test.back())
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