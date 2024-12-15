#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        if(k==1) cout<<n<<endl;
        else 
        {
            ll p = 0;
            while(n)
            {
                p+=n%k;
                n/=k;
            }
            cout<<p<<endl;
        }       
    }
    return 0;
}