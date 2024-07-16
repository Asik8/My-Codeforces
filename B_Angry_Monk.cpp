#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >> n>>k;
        vector <ll> v;
        for (int i = 0; i < k; i++)
        {
            ll a;
            cin>>a;
            v.pb(a);
        }  
        sort(v.begin(),v.end(),greater<ll>()); 
        ll c = 0;
        while(true)
        {
            if(v.size() == 1 || v[0] == n) break;
            if(v.back() == 1)
            {
                v[0]++;
                c++;
                v.pob();
            }
            else if(v.back()>1)
            {
                v[0]+= v.back();
                c+=((v.back()*2)-1);
                v.pob();
            }
        } 
        cout<<c<<endl;
    }

    return 0;
}