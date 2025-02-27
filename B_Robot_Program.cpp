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
    ll n,x,k;
    cin >> n>>x>>k;
    string s;
    cin>>s;
    vec(ll)v;
    ll c=0,lp=4;
    while(lp){
        bool f= false;
        for(auto l:s){
            if(l=='L'){
                x--;
                v.pb(x);
                if(x==0){
                    f=true;
                    break;
                }
            }
            else{
                x++;
                v.pb(x);
                if(x==0){
                    f=true;
                    break;
                }
            }
        }
        if(f)lp--;
        else break;
    }
    if(lp>0){
        for(auto l:v) if(l==0)c++;
        co(c)
        return;
    }
    vec(ll)in;
    f(i,0,sz(v)) if(v[i]==0) in.pb(i);
    // for(auto l:v) ct(l)
    // elc
    // for(auto l:in) ct(l)
    // elc
    map<ll,ll>dis;
    f(i,0,sz(in)-1)dis[in[i+1]-in[i]]++;
    ll mx=0,d=0;
    for(auto [l,r]:dis){
        // cout<<l<<" "<<r<<el
        if(r>mx){
            d=l;
            r=mx;
        }
    }
    // co(d)
    k-=(in[0]+1);
    co((k/d)+1)
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