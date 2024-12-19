#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
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
        string s;
        cin>>s;
        int c=0;
        vector<ll>v(8,0);
        for(char x:s) v[x-'A']++;
        for(int i=0;i<7;i++) c+=max(0LL,(k-v[i]));
        co(c)
    }
    return 0;
}