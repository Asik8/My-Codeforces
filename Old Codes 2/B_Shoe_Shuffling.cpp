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
    ll n;
    cin >> n;
    map<ll,ll>m;
    vector <ll> v(n);
    for (auto& x:v){
        cin >>x;
        m[x]++;
    } 
    for(auto x:m){
        if(x.second==1){
            co(-1)
            return;
        }
    }
    map<ll,vector<ll>>m1;
    forni m1[v[i]].pb(i+1);
    for(auto [x,y]:m){
        if(y&1){
            ll s=(sz(m1[x])+1)/2;
            s--;
            swap(m1[x][s],m1[x][s+1]);
        }
    }
    vector<ll> in(n);
    forni{
        in[i]=m1[v[i]].back();
        m1[v[i]].pop_back();
    }
    flx(in)
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