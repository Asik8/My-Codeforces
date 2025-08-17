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
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    vec(ll) as=v,de=v,ass;
    sort(all(as));
    ass=as;
    fl(i,1,n) as[i]+=as[i-1];
    fl(i,1,n) de[i]+=de[i-1];
    // flx(as)
    // flx(de)
    ll m;
    cin>>m;
    while(m--){
        ll x,l,r;
        cin>>x>>l>>r;
        l--,r--;
        if(x==1){
            if(l==r) co(v[l])
            else if(l==0) co(de[r])
            else co(de[r]-de[l-1])
        }else{
            if(l==r) co(ass[l])
            else if(l==0) co(as[r])
            else co(as[r]-as[l-1])
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}