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
    ll n,m,c=0;
    cin >>n>>m;
    vector <pi> v(n);
    for (auto& x:v) cin>>x.first>>x.second; 
    if(!(v[0].first&1) && v[0].second==0) c+=v[0].first;
    else if(!(v[0].first&1) && v[0].second==1) c+=v[0].first-1;
    else if((v[0].first&1) && v[0].second==0) c+=v[0].first-1;
    else if((v[0].first&1) && v[0].second==1) c+=v[0].first;
    fl(i,1,n){
        auto l=v[i-1],r=v[i];
        if(l.second==r.second){
            if((l.first&1)==(r.first&1)) c+=r.first-l.first;
            else c+=(r.first-l.first-1);
        } else{
            if((l.first&1)==(r.first&1)) c+=(r.first-l.first-1);
            else c+=(r.first-l.first);
        }
    }
    c+=(m-v[n-1].first);
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