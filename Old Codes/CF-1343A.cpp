#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        for(ll i=2;i<10e9;i++)
        {
            int p = pow(2,i)-1;
            if(n%p == 0)
            {
                cout<<n/p<<endl;
                break;
            }
        }
    }

    return 0;
}