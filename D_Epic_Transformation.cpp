#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll mx=0;
        map<ll,ll>mp;
        forni{
            ll x;
            cin>>x;
            mp[x]++;
        }
        for(auto it:mp) mx=max(mx,it.second);
        ll ans = n-mx;
        ans = min(ans,n/2);
        cout<<n-ans*2<<endl;
    }
    return 0;
}