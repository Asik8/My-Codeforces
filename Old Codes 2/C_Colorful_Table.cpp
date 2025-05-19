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
    ll n,k;
    cin >> n>>k;
    vector <ll> v(n+1),l(k+1,n+1),r(k+1,-1),sl,sr;
    set<ll>s;
    f(i,1,n+1){
        cin>>v[i];
        l[v[i]]=min(l[v[i]],(ll)i);
        r[v[i]]=i;
        s.insert(v[i]);
    }
    sl=l;
    sr=r;
    fr(i,k-1,1){
        sl[i]=min(sl[i],sl[i+1]);
        sr[i]=max(sr[i],sr[i+1]);
    }
    f(i,1,k+1){
        if(!s.count(i)) ct(0)
        else ct(2*(sr[i]-sl[i]+1))
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