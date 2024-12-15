#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll l=0;
    map<ll,ll>mp;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++; 
        v.pb(x);
    }
    for(int i=0;i<n;i++){
        if(mp[v[i]]>l) l = mp[v[i]];
    }
    cout<<l<<endl;
    return 0;
}