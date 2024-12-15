#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
ll m;
bool check(ll n)
{
    if(n==m) return true;
    else if(n>m) return false;
    return check(n*10)||check(n*20);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        cin >> m;
        bool f = check(1);
        if(f) py
        else pn       
    }
    return 0;
}