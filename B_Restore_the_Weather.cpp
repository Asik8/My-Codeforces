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
        vector <pair<ll,ll>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }     
        vector<ll>b(n);  
        for (int i = 0; i < n; i++)
            cin >> b[i]; 
        sort(a.begin(),a.end());   
        sort(b.begin(),b.end());   
        vector <ll> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[a[i].second] = b[i];
        } 
        for (int i = 0; i < n; i++)
            cout<<ans[i]<<" ";
        cout<<endl;    
    }

    return 0;
}