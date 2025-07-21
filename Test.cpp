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
    vector <pair<pair<int,int>,int>> v(n);
    for (auto& x:v) cin>>x.first.first>>x.first.second>>x.second; 
    ll ans=0;
    for(int i=1;i<=3;i++){
        ll c=0,op=i;
        fl(j,0,n){
            ll a=v[j].first.first,b=v[j].first.second,g=v[j].second;
            if(a==op) op=b;
            else if(b==op) op=a;
            if(g==op) c++;
        }
        ans=max(ans,c);
    }
    co(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}