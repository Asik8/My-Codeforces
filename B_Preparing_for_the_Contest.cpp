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
        ll n,k;
        cin >>n>>k;
        vector<ll>v(n);
        ll l=n;
        for(int i=0;i<n;i++)
        {
            v[i] = l;
            l--;
        }
        l=n-(k+1);
        reverse(v.begin()+l,v.end());
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}