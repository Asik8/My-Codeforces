#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> a(n);
        for (auto& x:a) cin >>x;      
        bool f = true;
        for(int i=0;i<n-2;i++)
        {
            if(a[i]<0) 
            {
                f = false;
                pn
                break;
            }
            a[i+2]-=a[i];
            a[i+1]-=2*a[i];
            a[i]=0;
        }
        if(f)
        {
            if(a[n-1]!=0 || a[n-2]!=0) pn
            else py
        }
    }
    return 0;
}