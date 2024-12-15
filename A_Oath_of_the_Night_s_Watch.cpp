#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    ll l = v.front(),h = v.back(),c= 0;
    for(int i=1;i<v.size()-1;i++)
        if(v[i]>l && v[i]<h) c++;
    cout<<c<<endl;
    return 0;
}