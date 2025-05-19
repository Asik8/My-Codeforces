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
        ll n,a,b,c,d;
        cin >> n>>a>>b>>c>>d;
        ll sub_ab = (a-b)*n ;
        ll sum_ab = (a+b)*n;
        ll low = c-d;
        ll high = c+d;
        if(sum_ab<low || high<sub_ab) cout<<"No\n";
        else cout<<"Yes\n";
    }

    return 0;
}