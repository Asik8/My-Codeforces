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

ll cok(vec(int) &v, int k, int l, int r) {
    if(k<0) return 0;
    int n=sz(v);
    unordered_map<int,int> mp;
    ll lf=0,c=0;
    fl(i,0,n) {
        mp[v[i]]++;
        while (sz(mp) > k) {
            mp[v[lf]]--;
            if (mp[v[lf]] == 0) mp.erase(v[lf]);
            lf++;
        }
        ll mn= max(lf,(ll)(i-r+1)),mx= i-l+1;
        if (mn<=mx&&mx>=0) c+= max(0LL,mx-mn+1);
    }
    return c;
}

void asikM() {
    int n,k,l,r;
    cin>>n>>k>>l>>r;
    vec(int) v(n);
    for(auto &x:v)cin>>x;
    ll ans=cok(v,k,l,r)-cok(v,k-1,l,r);
    co(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) asikM();
    return 0;
}