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

ll ch(ll n){
    return 1<<(31-__builtin_clz(n));
}

void asikM(){
    ll l,r;
    cin>>l>>r;
    vec(ll)ans(r-l+1);
    map<ll,ll>m;
    for(int i=l,p=0;i<r+1;i++,p++){
        ans[p]=i;
        m[i]=p;
    }
    vec(bool) d(r-l+1,false);
    for(int p=ch(r);p>l;p/=2){
        if(d[m[p]]) continue;
        for(int i=m[p],j=m[p]-1;i<=r && j>=0;i++,j--){
            if(d[i]) break;
            swap(m[ans[i]],m[ans[j]]);
            swap(ans[i],ans[j]);
            d[i]=d[j]=true;
        }
    }
    ll c=0;
    for(int p=0,i=l; i<=r;i++,p++) c+=(ans[p]|i);
    co(c)
    flx(ans)
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