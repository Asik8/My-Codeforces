#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    bool f = false;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        if(a!=b) f = true;
    }
    if(f) cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";
    return 0;
}