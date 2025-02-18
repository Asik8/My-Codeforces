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
    ll n,root;
    cin >> n;
    vec(ll) v[n+1],bad(n+1),a(n+1),ans;
    f(i,1,n+1){
        ll p,c;
        cin>>p>>c;
        if(p==-1) root=i;
        else v[p].pb(i);
        if(c==1){
            bad[p]++;
            a[i]=1;
        }
    } 
    f(i,1,n+1){
        if(root!=i && sz(v[i])==bad[i] && a[i]==1){
            ans.pb(i);
        }
    }
    if(ans.empty()){
        co(-1)
        return;
    }
    for(auto x:ans) ct(x)
    elc
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