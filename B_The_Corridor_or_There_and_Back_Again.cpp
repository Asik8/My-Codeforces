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
        ll n,mi = INT_MAX;
        cin >> n;
        while(n--)
        {
            int d,s;
            cin>>d>>s;
            int time = d+(s-1)/2;
            if(time<mi) mi = time;
        }      
        cout<<mi<<endl;
    }

    return 0;
}