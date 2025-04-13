#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    string p,s;
    cin>>p>>s;
    ll l=0,r=0,n=sz(p),m=sz(s);
    if(s==p){
        py
        return;
    }
    while(l<n && r<m){
        char a=p[l];
        ll c1=0,c2=0;
        while(l<n && p[l]==a){
            c1++;
            l++;
        }
        while(r<m && s[r]==a){
            c2++;
            r++;
        }
        if(2*c1<c2 || c1>c2){
            pn
            return;
        }
    }
    if(l==n && r==m) py else pn
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}