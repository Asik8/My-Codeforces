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

void asikM(){
    deque<ll>d;
    ll n;
    cin>>n;
    set<ll>s;
    vec(pi)sw;
    fl(i,0,n-1){
        ll u,v,x,y;
        cin>>u>>v>>x>>y;
        if(x>y){
            if(s.count(u) && s.count(v)) sw.pb({u,v});
            if(!s.count(u)){
                d.push_front(u);
                s.insert(u);
            }
            if(!s.count(v)){
                d.push_back(v);
                s.insert(v);
            }
        } else{
            if(s.count(u) && s.count(v)) sw.pb({v,u});
            if(!s.count(v)){
                d.push_front(v);
                s.insert(v);
            }
            if(!s.count(u)){
                d.push_back(u);
                s.insert(u);
            }
        }
    }
    vec(ll)v(n);
    ll l=n;
    for(auto x:d) v[x-1]=l--;
    for(auto [x,y]:sw){
        if(v[x-1]<v[y-1])
            swap(v[x-1],v[y-1]);
    }
    flx(v)
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