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
    ll tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        string s,t;  
        cin>>s>>t;
        if(s==t) py
        else if(find(s.begin(),s.end(),'1') == s.end() && find(t.begin(),t.end(),'1')!=t.end()) pn
        else{
            ll l=s.find('1');
            ll c=0;
            for(int i=0;i<l;i++){
                if(s[i]!=t[i])c++;
            }
            if(c)pn else py
        }    
    }
    return 0;
}