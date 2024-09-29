#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >>n>>k;
    vector <ll> v(n);
    for (int i=0;i<n;i++) cin >>v[i]; 
    vector<ll> p_sum(n,0);
    p_sum[0] = v[0];
    for(int i=1;i<n;i++) 
    {
        p_sum[i] = v[i]+p_sum[i-1];
    }
    vector<pair<ll,ll>> ans;
    ll mx=p_sum[k-1];
    ans.pb({mx,k-1});
    ll l=0;
    for(int i=k;i<n;i++)
    {
        ll d = p_sum[i]-p_sum[l];
        ans.pb({d,i});
        if(mx>d) mx = d;
        l++;
    }
    // cout<<mx<<endl;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i].first == mx) 
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}