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
    ll n,m;
    cin >> n>>m;
    vector <ll> v(m);
    for (auto& x:v) cin >>x; 
    vector<ll>a=v,b(m,-1);
    ll c=0;
    sort(all(a));
    map<ll,int>mp;
    for(int i=m-1;i>=0;i--) mp[a[i]]=max(mp[a[i]],i);
    // for(auto [x,y]:mp) cout<<x<<" "<<y<<el
    for(int i=0;i<m;i++){
        for(int j=0;j<=mp[v[i]];j++) if(b[j]!=-1) c++;
        b[mp[v[i]]]=1;
        mp[v[i]]--;
    }
    co(c)
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