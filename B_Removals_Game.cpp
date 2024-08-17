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
        ll n;
        cin >> n;
        vector <ll> v1(n),v2(n);
        for (auto& x:v1) cin >>x;       
        for (auto& x:v2) cin >>x;  
        for(int i=0;i<n-1;i++)
        {
            // if(v1[0] == v2.back())
            // {
            //     v1.erase(v1.begin());
            //     v2.erase(v2.begin());
            // }
            // else if(v2[0] == v1.back())
            // {
                v1.erase(v1.begin());
                v2.erase(v2.begin());
            // }
        }   
        if(v1 == v2) cout<<"Bob\n";
        else cout<<"Alice\n";  
    }
    return 0;
}