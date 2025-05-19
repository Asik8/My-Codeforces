#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        ll s1=0,s2=0;
        for(int i=0;i<n;i+=2) s1+=v[i];      
        for(int i=1;i<n;i+=2) s2+=v[i]; 
        cout<<s1-s2<<endl;     
    }
    return 0;
}