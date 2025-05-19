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
        ll a,b;
        cin>>a>>b;
        cout<<(b-a)+(b-b)<<endl;       
    }
    return 0;
}