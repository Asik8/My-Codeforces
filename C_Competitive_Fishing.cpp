#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n,0);
    string s;
    cin>>s;
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            if(s[i]=='0') v[i]=-1;
            else v[i]=1;
        } else{
            if(s[i]=='0') v[i]=v[i+1]-1;
            else v[i]=v[i+1]+1;
        }
    }
    v[0]=-1000000;
    sort(allr(v));
    ll ans=1,sm=0;
    fl(i,0,n-1,1){
        sm+=v[i];
        ans++;
        if(sm>=k){
            co(ans)
            return;
        }
    }   
    co(-1) 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}