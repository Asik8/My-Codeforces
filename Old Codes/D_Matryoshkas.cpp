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
        ll n;
        cin >> n;
        set<ll>s;
        map<ll,ll>mp;
        forni{
            ll x;
            cin>>x;
            mp[x]++;
            s.insert(x);
            s.insert(x+1);
        }       
        ll ans=0,l=0,a=0;
        for(auto it:s){
            ll c = mp[it];
            ans+=max(a,c-l);
            l = c;
        }
        cout<<ans<<endl;
    }
    return 0;
}