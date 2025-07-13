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

pi v[110];
int d[110];

void asikM(){
    ll n,l=0;
    cin >> n;
    for(ll i=2;i*i<=n;i++){
        if(!(n%i)){
            ll c=0;
            while(!(n%i)){
                c++;
                n/=i;
            }
            v[++l]={c,i};
        }
    }
    if(n>1) v[++l]={1,n};
    sort(v+1,v+l+1);
    d[l+1]=1;
    for(int i=l;i>0;i--) d[i]=d[i+1]*v[i].second;
    ll ans=0;
    fl(i,1,l+1){
        if(v[i].first != v[i-1].first){
            ans+=(d[i]*(v[i].first-v[i-1].first));
        }
    }
    co(ans)
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