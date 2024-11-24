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
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        sort(v.begin(),v.end());
        ll l=0,x=0;
        while(l<n-1){
            x=v[l];
            v[l]=0;
            cout<<v.back()<<endl;
            for(int i=l+1;i<n;i++) v[i]-=x;
            l++;
        }  
        for(auto c:v) cout<<c<<" ";
        cout<<endl;
        // cout<<v.back()<<endl;
        // if(v.back()==k) py else pn    
    }
    return 0;
}