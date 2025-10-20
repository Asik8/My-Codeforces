#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

const ll N=2e5+10;
vec(vec(ll)) p(N+1);

void asikM(){
    ll n;
    cin>>n;
    vector<ll>a(n),b(n);
    for(auto& x:a)cin>>x; 
    for(auto& x:b)cin>>x; 
    ll ans=2;
    map<ll,ll>m;
    // flx(p[3])
    // flx(p[11])
    forni{
        acv(p[a[i]],x){
            if(m[x]) ans=0;
            m[x]++;
        }
    }
    forni{
        acv(p[a[i]],x) m[x]--;
        acv(p[a[i]+1],x){
            if(m[x]) ans=min(ans,1LL);
        }
        acv(p[a[i]],x) m[x]++;
    }
    co(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    for(int i=2;i<=N;i++){
        if(sz(p[i])) continue;
        for(int j=i; j<=N;j+=i) p[j].pbk(i);
    }
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}