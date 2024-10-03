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
        vector <ll> v(n),a,ans;
        for (auto& x:v) 
        {
            cin >>x;  
            a.pb(x);
        }
        sort(a.begin(),a.end());
        bool f = false;
        for(ll b:v)
        {
            ll c=0,s=b,in = b;
            f = false;
            for(ll x:a)
            {
                if(!f && in == x) f = true;
                else if(s>=x)
                {
                    s+=x;
                    c++;
                }
            }
            ans.pb(c);
        }     
        for(ll a:ans) cout<<a<<" ";
        cout<<endl;
    }
    return 0;
}