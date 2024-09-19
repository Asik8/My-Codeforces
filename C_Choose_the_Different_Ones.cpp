#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m,k;
        cin>>n>>m>>k;
        set <ll> a,b,ans;
        for(int i=0;i<n+m;i++)
        {
            ll x;
            cin>>x;
            if(x<=k && i<n)
            {
                a.insert(x);
                ans.insert(x);
            }
            else if(x<=k && i>=n)
            {
                b.insert(x);
                ans.insert(x);
            }
        }
        if (a.size() >= k / 2 && b.size() >= k / 2 && ans.size() == k) py
        else pn
    }
    return 0;
}