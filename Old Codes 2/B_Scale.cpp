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
        cin>>n>>k;
        char c[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++) cin>>c[i][j];
        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                cout<<c[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}