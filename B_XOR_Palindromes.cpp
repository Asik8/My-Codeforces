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
        string s,ans;
        cin>>s;
        ll c=0,f=0;
        for(int i=0;i<n/2;i++) c+=(s[i]!=s[n-i-1]);
        f(i,0,c) ans+='0';
        if(n%2) for(ll i=c;i<=(n-c);i++)ans+='1';
        else{
            for(ll i=c;i<=(n-c);i++){
                ans+=((!(f%2))?'1':'0');
                f++;
            }
        }
        f(i,0,c) ans+='0';
        co(ans)
    }
    return 0;
}