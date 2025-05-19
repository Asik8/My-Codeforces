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
const int N=2e5+20;

void asikM(){
    ll n,k,q;
    cin >> n>>k>>q;
    vec(ll)v(N,0),pnt(N,0),tpnt(N,0);
    while(n--){
        ll l,r;
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    f(i,1,N) v[i]+=v[i-1];
    f(i,0,N) pnt[i]=(v[i]>=k);
    f(i,1,N) tpnt[i]=tpnt[i-1]+pnt[i];
    while(q--){
        ll l,r,c=0;
        cin>>l>>r;
        co(tpnt[r]-tpnt[l-1])
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
