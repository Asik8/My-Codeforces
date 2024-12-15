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
        ll a,b;
        cin>>a>>b;
        if(!(a%2) && !(b%2)) py 
        else if(!(a%2) && (b%2) && a!=0) py 
        else pn   
    }
    return 0;
}