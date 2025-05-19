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
        ll n,s= 0;
        cin >> n;
        while(n>0)
        {
            ll d = n%10;
            s+=d;
            n/=10;
        }   
        cout<<s<<endl;
    }

    return 0;
}