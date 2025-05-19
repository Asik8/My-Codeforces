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
    while (t--){
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        ll c1=0,s1=0,c2=0,s2=0;
        forni{
            if(!(i%2)){
                c1++;
                s1+=v[i];
            }
            else{
                c2++;
                s2+=v[i];
            }
        }     
        if(!(s1%c1) && !(s2%c2) && (s1/c1)==(s2/c2)) py else pn 
    }
    return 0;
}