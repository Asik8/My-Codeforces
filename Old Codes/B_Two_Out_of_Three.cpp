#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> a(n),v(n,1);
        map<ll,ll> mp;
        for (auto& x:a) 
        {
            cin >>x; 
            mp[x]++;
        }
        vector<ll>s;
        for(auto it:mp)
        {
            if(it.second>=2) s.pb(it.first);
        }
        if(s.size()<2) cout<<"-1\n";
        else 
        {
            bool f1=false,f2=false;
            for(int i=0;i<n;i++) 
            {
                if(a[i] == s[0]) 
                {
                    if(f1) v[i] = 2;
                    else v[i] = 1;
                    f1 = true;
                }
                else if(a[i] == s[1])
                {
                    if(f2)v[i] = 3;
                    else v[i] = 1;
                    f2 = true;
                }
            }
            for(ll x:v) cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}