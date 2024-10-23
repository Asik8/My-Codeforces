#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >>n>>k;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        ll fc=0,lc=0,in=0;
        forni{
            if(v[i] == v[0]){
                fc++;
                in = i;
                if(fc==k) break;
            }
        }   
        for(int i=n-1;i>in;i--){
            if(v[i] == v.back())lc++;
            if(lc==k) break;
        }
        if((fc>=k && lc>=k) || fc == n || (v[0] == v.back() && fc>=k)) py
        else pn
    }
    return 0;
}