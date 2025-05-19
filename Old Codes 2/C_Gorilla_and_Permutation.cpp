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
        ll n,m,k;
        cin >> n>>m>>k;
        for(int i=n;i>m;i--) cout<<i<<" ";
        for(int i=1;i<=m;i++) cout<<i<<" ";
        cout<<endl;      
    }

    return 0;
}