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
        vector <ll> v(n),p(n),lp,rp;
        for (auto& x:v) cin >>x;    
        p[0]=v[0];
        for(int i=1;i<n;i++) p[i]=v[i]+p[i-1]; 
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L') lp.pb(i);
            if(s[i]=='R') rp.pb(i);
        }
        reverse(rp.begin(),rp.end());
        ll c=0;
        for(int i=0;i<min(lp.size(),rp.size());i++){
            if(lp[i]<rp[i]){
                if(lp[i]==0) c+=p[rp[i]];
                else c+=p[rp[i]]-p[lp[i]-1];
            }
        } 
        cout<<c<<endl;
    }
    return 0;
}