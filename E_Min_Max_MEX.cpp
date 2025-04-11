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

const int N=2e5+10;
vec(ll) a(N,0);

bool ch(ll m,vector<ll> v,ll k){
    ll c=0,cMex=0;
    fl(i,0,sz(v)){
        if(v[i]<=sz(v)+1) a[v[i]]=1;
        while(a[cMex]) cMex++;
        if(cMex>=m){
            c++;
            cMex=0;
            fl(j,0,min(m+1,(ll)sz(v)+2)) a[j]=0;
        }
    }
    fl(j,0,sz(v)+3) a[j]=0;
    return c>=k;
}

void asikM(){
    ll n,k;
    cin >> n>>k;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll l=0,r=1e9+5;
    while(r-l>1){
        ll m=(r+l)/2;
        if(ch(m,v,k)) l=m;
        else r=m;
    }
    co(l)
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