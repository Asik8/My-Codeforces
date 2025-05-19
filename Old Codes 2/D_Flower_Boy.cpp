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
const ll INF=1000000000000000000LL;

void asikM(){
    ll n,m,l=0,mn=LLONG_MAX;
    cin>>n>>m;
    vector <ll> a(n),b(m),s(m,-INF),p(m,INF);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    forni{
        if(a[i]>=b[l]){
            p[l]=i;
            l++;
        }
        if(l==m) break;
    }
    l=m-1;
    for(int i=n-1;i>=0;i--){
        if(a[i]>=b[l]){
            s[l]=i;
            l--;
        }
        if(l<0) break;
    }
    if(p[m-1] != INF){
        co(0)
        return;
    }
    fl(i,1,m-1){
        if(s[i+1]>p[i-1])
            mn=min(mn,b[i]);
    }
    if(p[m-2] != INF) mn=min(mn,b[m-1]);
    if(s[1] != -INF) mn=min(mn,b[0]);
    if(mn==LLONG_MAX) co(-1) else co(mn)
    // flx(s)
    // flx(p)
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