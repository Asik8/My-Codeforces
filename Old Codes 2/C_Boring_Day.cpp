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
        ll n,a,b;
        cin >> n>>a>>b;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;
        ll l=0,r=0,c=0,s=0;
        while(r<n){
            s+=v[r];
            while(s>b){
                s-=v[l];
                l++;
            }
            if(s>=a && s<=b){
                l=r+1;
                s=0;
                c++;
            }
            r++;
        }     
        cout<<c<<endl; 
    }
    return 0;
}