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
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >> n>>k;
        map<ll,ll>mp;
        vector <ll> v(n);
        for (auto& x:v){
            cin >>x;
            mp[x]++;
        } 
        bool f=false;
        forni{
            mp[v[i]]--;
            if(mp[v[i]-k]>0 || mp[v[i]+k]>0){
                f=true;
                break;
            }
            mp[v[i]]++;
        }  
        if(f)py else pn
    }
    return 0;
}