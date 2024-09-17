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
        ll n,m,q;
        cin >> n>>m>>q;
        vector <ll> v(m);
        for (auto& x:v) cin >>x; 
        sort(v.begin(),v.end());
        while(q--)
        {
            ll a;
            cin>>a;
            if(v.back()<a) cout<<n-v.back()<<endl;
            else if(v[0]>a)cout<<v[0]-1<<endl;
            else 
            {
                auto it = lower_bound(v.begin(),v.end(),a);
                cout<<(*it - *(it-1))/2<<endl;
            }
        }      
    }
    return 0;
}