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
const ll N= 998244353;
ll pr[100001];

void asikM(){
    ll n;
    cin >> n;
    vector <ll> a(n),b(n),ina(n),inb(n),ans(n);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    forni{
        ina[a[i]]=i;
        inb[b[i]]=i;
    }
    ll m1=a[0],m2=b[0];
    fl(i,0,n){
        m1=max(m1,a[i]);
        m2=max(m2,b[i]);
        pi x={m1,b[i-ina[m1]]};
        pi y={m2,a[i-inb[m2]]};
        pi mx=max(x,y);
        ans[i]=((pr[mx.first]+pr[mx.second])%N);
    }
    flx(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    pr[0]=1;
    fl(i,1,100001) pr[i]=((pr[i-1]*2)%N);
    while (t--)
    asikM();      
    return 0;
}