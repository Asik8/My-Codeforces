#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        int c=n,l=0,r=0; 
        while(l<n && v[l] == v[0]) l++;
        while(r<n && v[n-r-1] == v[n-1]) r++;
        if(v[0] == v[n-1])
        {
            c-=l;
            c-=r;
        }
        else c-=max(l,r);
        cout<<max(c,0)<<endl;
    }
    return 0;
}