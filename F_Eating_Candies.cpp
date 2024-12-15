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
    while (t--){
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;
        ll l=0,r=n-1,s1=v[0],s2=v[n-1],c=0;
        while(l<r){
            if(s1==s2) c=max(c,l+1+n-r);
            if(s1<=s2){
                l++;
                s1+=v[l];
            }
            else if(s2<s1){
                r--;
                s2+=v[r];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}