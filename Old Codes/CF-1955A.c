#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll f=n*a;
    ll s=(n/2)*b+(n%2)*a;
    cout<<min(f,s)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}