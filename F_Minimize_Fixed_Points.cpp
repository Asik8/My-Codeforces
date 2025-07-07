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

const int N=1e5;
vector<ll> d(N+1,0);

void findh(){
    for(int i=1;i<=N/2;i++){
        for(int j=2*i;j<=N;j+=i){
            d[j]=i;
        }
    }
}

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n+1);
    for(int i=1;i<=n;i++) v[i]=i;
    for(int i=n;i>1;i--){
        if(d[i]!=1) swap(v[i],v[d[i]]);
    }
    fl(i,1,n+1) cout<<v[i]<<" ";
    elc
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    findh();
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}