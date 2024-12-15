#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >>n>>m;
    vector <ll> v(n),pc;
    for (auto& x:v) cin >>x; 
    set<int> s;
    for(int i=n-1;i>=0;i--)
    {
        s.insert(v[i]);
        pc.pb(s.size());
    } 
    reverse(pc.begin(),pc.end());
    while(m--)
    {
        ll a;
        cin>>a;
        cout<<pc[a-1]<<endl;
    }     
    return 0;
}