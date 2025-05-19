#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        map<ll,ll>mp;
        vector<ll> v;
        f(i,0,n){
            ll x;
            cin>>x;
            v.pb(x);
        }       
        ll c=0;
        for(int i=n-1;i>=0;i--){
            if(mp[v[i]]>0) break;
            else{
                mp[v[i]]++;
                c++;
            }
        }
        cout<<n-c<<endl;
    }
    return 0;
}