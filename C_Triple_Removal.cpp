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

ll compute_cost(vector<int>& positions) {
    ll cost = 0;
    for (int i = 0; i + 2 < positions.size(); i += 3) {
        int d1 = positions[i+1] - positions[i];
        int d2 = positions[i+2] - positions[i+1];
        cost += min(d1, d2);
    }
    return cost;
}

void asikM(){
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n+1),a(n+1,0),b(n+1,0),p1,p2;
    for(auto& x:v)cin>>x; 
    fl(i,1,n+1,1){
        cin>>v[i];
        if(v[i]==0) p1.pbk(i);
        else p2.pbk(i);
        // if(v[i]==0) a[i+1]=1;
        // else b[i+1]=1;
    }
    // fl(i,1,n+1,1){
    //     cin>>v[i];
    //     a[i]=(a[i])? a[i-1]+1:a[i-1];
    //     b[i]=(b[i])? b[i-1]+1:b[i-1];
    // }
    // flx(a)
    // flx(b)
    while(q--){
        ll l,r;
        cin>>l>>r;
        auto l1=lower_bound(all(p1),l);
        auto r1=lower_bound(all(p1),r);
        auto l2=lower_bound(all(p2),l);
        auto r2=lower_bound(all(p2),r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}