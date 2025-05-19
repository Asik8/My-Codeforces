#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,s=0;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v){
            cin >>x;
            s+=x;
        }       
        if((2*s)%n){
            cout<<"0\n";
            continue;
        }
        ll ans=0;
        map<ll,ll>mp;
        forni{
            ans+= mp[2*s/n-v[i]];
            mp[v[i]]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}