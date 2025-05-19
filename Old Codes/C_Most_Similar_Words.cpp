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
    ll n,m,ans=INT_MAX;
    cin >> n>>m;
    vector <string> v(n);
    for (auto& x:v) cin >>x; 
    f(l,0,n-1){
        f(r,l+1,n){
            ll c=0;
            // cout<<v[l]<<" "<<v[r]<<endl;
            // co(c)
            f(i,0,m){
                c+=(max(v[l][i],v[r][i])-min(v[l][i],v[r][i]));
                // co(c)
                // cout<<max(v[l][i],v[r][i])<<" "<<min(v[l][i],v[r][i])<<el;
                // co(max(v[l][i],v[r][i])-min(v[l][i],v[r][i]))
            }
            ans=min(ans,c);
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