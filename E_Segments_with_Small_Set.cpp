#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &x:v) cin>>x;
    unordered_map<ll,ll>mp;
    ll r=0,l=0,c=0,d=0;
    while(r<n){
        if(mp[v[r]]==0) d++;
        mp[v[r]]++;
        while(d>k){
            mp[v[l]]--;
            if(mp[v[l]]==0) d--;
            l++;
        }
        c+=r-l+1;
        r++;
    }
    cout<<c<<endl;
    return 0;
}