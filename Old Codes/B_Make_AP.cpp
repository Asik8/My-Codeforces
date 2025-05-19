#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a,b,c;
        cin >> a>>b>>c;
        if(((2*b)-c)%a == 0 && ((2*b)-c)>0) cout<<"YES\n";
        else if((a+c)%(2*b) == 0) cout<<"YES\n";
        else if(((2*b)-a)%c == 0 && ((2*b)-a)>0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}