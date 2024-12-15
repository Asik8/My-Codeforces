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
        ll n;
        cin >> n;
        vector <ll> a(n);
        for (auto& x:a) cin >>x;
        ll r=0,c=0;
        sort(a.begin(),a.end());
        ll l=0,h=n-1;
        while(l<h){
            ll m=a[l]*a[h];
            if(m==(n-2)){
                r=a[l];
                c=a[h];
                break;
            }
            if(m>n-2) h--;
            else if(m<n-2) l++;
        }
        cout<<r<<" "<<c<<endl;  
    }
    return 0;
}