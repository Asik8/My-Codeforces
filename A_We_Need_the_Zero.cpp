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
const int N=2e8+20;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,s=0;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v){
            cin >>x;
            s^=x;
        }    
        if(s==0) co(0)  
        else{
            if(n%2) co(s)
            else co(-1)
        }
    }
    return 0;
}