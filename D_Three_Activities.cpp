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

vector<ll> find_best(vector<ll>a){
    vector<ll> best(3,-1);
    fl(i,0,sz(a)){
        if(best[0]==-1 || a[best[0]]<a[i]){
            best[2]=best[1];
            best[1]=best[0];
            best[0]=i;
        } else if(best[1]==-1 || a[best[1]]<a[i]){
            best[2]=best[1];
            best[1]=i;
        } else if(best[2]==-1 || a[best[2]]<a[i]){
            best[2]=i;
        }
    }
    return best;
}

void asikM(){
    ll n,ans=0;
    cin >> n;
    vector <ll> a(n),b(n),c(n);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    for(auto &x:c) cin>>x;
    vec(ll) b1,b2,b3;
    b1=find_best(a);
    b2=find_best(b);
    b3=find_best(c);
    for(auto x:b1){
        for(auto y:b2){
            for(auto z:b3){
                if(x!=y && x!=z && y!=z){
                    ans=max(ans,a[x]+b[y]+c[z]);
                }
            }
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