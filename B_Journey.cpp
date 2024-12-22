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
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        ll s=a+b+c,cont=((n/s)*3);
        if(s>n){
            ll s2=0;
            if(s2<n){
                s2+=a;
                cont++;
            }
            if(s2<n){
                s2+=b;
                cont++;
            }
            if(s2<n){
                s2+=c;
                cont++;
            }
            co(cont)
        }
        else{
            // cout<<"COnt: "<<cont<<endl;
            // cout<<"s Before: "<<s<<endl;
            s*=(cont/3);
            // cout<<"s after: "<<s<<endl;
            while(s<n){
                s+=a;
                cont++;
                if(s>=n) break;
                s+=b;
                cont++;
                if(s>=n) break;
                s+=c;
                cont++;
                if(s>=n) break;
            }
            co(cont)
        }
    }
    return 0;
}