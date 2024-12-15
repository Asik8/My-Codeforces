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
        ll l1=0,l2=0,r1=n-1,r2=n-1;
        for (auto& x:v1) cin >>x;       
        for (auto& x:v2) cin >>x;  
        bool f=false;
        for(int i=0;i<n-1;i++)
        {
            if(v1[l1] != v2[r2] && v1[l1] != v2[l2])
            {
                f = true;
                break;
            }
            else if(v1[r1] != v2[r2] && v1[r1] != v2[l2])
            {
                f = true;
                break;
            }
            else
            {
                if(v1[l1] == v2[r2]) r2--;
                else if(v1[l1] == v2[l2]) l2++;
                l1++;
            }
        }   
        if(f) cout<<"Alice\n";
        else cout<<"Bob\n";  
    }
    return 0;
}