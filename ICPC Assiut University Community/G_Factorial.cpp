#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n,m = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
            m*=i;
        
        cout<<m<<endl;
    }

    return 0;
}