#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll p = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k,sum = 0,ans = 0,total = 0;
        cin >> n>>k;
        vector <ll> v(n);
        for (auto& x:v) 
        {
            cin >>x;
            total+=x;
            sum+=x;
            if(sum<0) sum = 0;
            ans = max(sum,ans);
        }     
        total = (total%p +p)%p;
        ans %= p;
        ll po = 1;
        while(k--) po = po*2%p;
        ans = (total+ans*po-ans+p)%p;
        cout<<ans<<endl;
    }
    return 0;
}