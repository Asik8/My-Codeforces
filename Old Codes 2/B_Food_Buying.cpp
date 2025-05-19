#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,cost = 0;
        cin >> n;
        if(n<10) cout<<n<<endl;
        else
        {
            ll div ,p;
            while(1)
            {
                div = (n/10)*10;
                cost+=div;
                p = n-div;
                n = (n/10)+p;
                if(n<10)
                {
                    cost+= n;
                    break;
                }

            }
            cout<<cost<<endl;
        }   
    }

    return 0;
}