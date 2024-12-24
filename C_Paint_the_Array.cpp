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
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;      
        ll g1=0,g2=0,c=0;
        forni{
            if(!(i%2)) g1=__gcd(g1,v[i]);
            else g2=__gcd(g2,v[i]);
        } 
        bool f=true;
        for(int i=0;i<n;i+=2){
            if(!(v[i]%g2)){
                f=false;
                break;
            }
        }
        if(f) c=g2;
        else{
            f=true;
            for(int i=1;i<n;i+=2){
                if(!(v[i]%g1)){
                    f=false;
                    break;
                }
            }
            if(f) c=g1;
        }
        co(c)
    }
    return 0;
}