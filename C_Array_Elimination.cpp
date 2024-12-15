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

string DTB(ll n){
    string s;
    for(int i=64;i>=0;i--){
        ll k=n>>i;
        if(k&1) s+='1';
        else s+='0';
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,c=0;
        cin >> n;
        vector <ll> v(n),a(64);
        for (auto& x:v) cin >>x;  
        forni{
            string s=DTB(v[i]);
            for(int j=0;j<64;j++){
                if(s[j]!='0') a[j]++;
            }
        }    
        for(int i=0;i<64;i++) c=__gcd(c,a[i]); 
        f(i,1,n+1) if(!(c%i)) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}