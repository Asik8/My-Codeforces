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
        ll sum_ab = (a+b)*n;
        ll sub_ab = (a-b)*n ;
        ll high = c+d;
        ll low = c-d;
        bool f = false;
        if(sum_ab>=low && sum_ab<=high) f = true;
        else if(sub_ab>=low && sub_ab<=high) f = true;
        if(f) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}