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
        ll n,c=0;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        bool f=false;
        f(i,0,n-1){
            if(v[i]>0){
                f=true;
                c+=v[i];
            }
            else if(v[i]==0 && f) c++;
        }      
        co(c)
    }
    return 0;
}