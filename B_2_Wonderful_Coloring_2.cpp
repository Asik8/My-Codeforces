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
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,k,a=0,b=0;
    cin >> n>>k;
    vector <ll> v(n),ans(n);
    map<ll,vec(ll)>m;
    for (auto& x:v) cin >>x; 
    forni{
        m[v[i]].pb(i);
    }
    ll ind=1,st;
    for(auto [x,y]:m){
        if(sz(y)>=k){
            a++;
            for(int i=0;i<k;i++){
                ans[y[i]]=ind++;
                if(ind==k+1) ind=1;
            }
            for(int i=0;i<sz(y)-k;i++) ans[y[i+k]]=0;
        }
        else{
            st=ind;
            for(int i=0;i<sz(y);i++){
                ans[y[i]]=ind++;
                if(ind==k+1) ind=1;
            }
            b+=sz(y);
        }
    }
    ll to=a+b/k;
    map<ll,ll>mp;
    forni{
        mp[ans[i]]++;
        if(mp[ans[i]]<=to) ct(ans[i])
        else ct(0)
    }
    elc
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