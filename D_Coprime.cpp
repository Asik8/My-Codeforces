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
#define sz(x) x.size()
#define vec vector<ll>
vec pairs[1001];

void asikM(){
    ll n,ans=-1;
    cin >> n;
    vector <ll> v[1001];
    f(i,1,n+1){
        ll x;
        cin>>x;
        v[x].pb(i);
    } 
    f(i,1,1001){
        for(auto j:pairs[i]){
            if(!v[i].empty() && !v[j].empty()){
                ans=max(ans,v[i].back()+v[j].back());
            }
        }
    }
    co(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    f(i,1,1001){
        f(j,1,1001){
            if(__gcd(i,j)==1){
                pairs[i].pb(j);
            }
        }
    }
    ll t;
    cin >> t;
    while (t--) {
        asikM();      
    }
    return 0;
}