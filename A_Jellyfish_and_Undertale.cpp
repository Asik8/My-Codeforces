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
        cin >>a>>b>>n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        ll l=0,c=0;
        while(b>0 && l<n){
            if(b==1){
                b=min(b+v[l],a);
                l++;
            }
            c+=b-1;
            if(b>1) b=1;
            else b--;
        }   
        cout<<c+1<<endl;   
    }
    return 0;
}