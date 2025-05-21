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
#define co(x1) cout<<x1<<endl;
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

string ch(ll m){
    co(m)
    string s;
    cin>>s;
    return s;
}

int main() {
    ll l=1,r=1e6,ans;
    while(l<=r){
        ll m=(l+r)>>1;
        if(ch(m)=="<") r=m-1;
        else{
            ans=m;
            l=m+1;
        }
    }
    cout<<"! "<<ans<<endl;  
    return 0;
}