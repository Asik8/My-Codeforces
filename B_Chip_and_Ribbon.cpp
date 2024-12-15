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
        vector <ll> v(n);
        for (auto& x:v) cin >>x;   
        ll l=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>l) ans+=v[i]-l;
            l = v[i];
        }
        cout<<ans-1<<endl; 
    }
    return 0;
}