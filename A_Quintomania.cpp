#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;  
        bool f = true;
        for(int i=0;i<n-1;i++){
            ll l = max(v[i],v[i+1])-min(v[i],v[i+1]);
            if(l != 5 && l!=7){
                f = false;
                break;
            }
        }     
        if(f) py
        else pn
    }
    return 0;
}