#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,q;
        cin >>n>>q;
        map<ll,pair<ll,ll>>mp;
        forni{
            ll x;
            cin>>x;
            if(mp.count(x))mp[x].second = i;
            else{
                mp[x].first = i;
                mp[x].second = i;
            }
        }
        while(q--){
            ll a,b;
            cin>>a>>b;
            if(!mp.count(a) || !mp.count(b) || mp[a].first>mp[b].second) pn
            else py
        }
    }
    return 0;
}