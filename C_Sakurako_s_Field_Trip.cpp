#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 1; i < n; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
        for(int i=1;i<=n/2;i++) if(v[i]==v[i+1] || v[n-i+1]==v[n-i]) swap(v[i+1],v[n-i]);
        ll c=0;
        forni{
            if(v[i]==v[i+1])c++;
        }
        cout<<c<<endl;
    }
    return 0;
}