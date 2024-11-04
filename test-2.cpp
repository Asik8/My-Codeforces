#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >>n>>m;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    set<ll>s;
    vector<ll>ans;
    for(int i=n-1;i>=0;i--){
        s.insert(v[i]);
        ans.pb(s.size());
    }
    reverse(ans.begin(),ans.end());
    while(m--){
        ll l;
        cin>>l;
        l--;
        cout<<ans[l]<<endl;
    }
    return 0;
}