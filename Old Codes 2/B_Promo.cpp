#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end(),greater<ll>());
    vector<ll> v2(n+1,0);
    for (int i = 0; i < n; i++)
        v2[i+1] = v2[i] + v[i];
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<v2[x]-v2[x-y]<<endl;
    }
    return 0;
}