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
    ll n;
    cin >> n;
    vector <ll> v(n),p1,p2(n);
    for (auto& x:v) cin >>x;
    p1.pb(0);
    p1.pb(1);
    for(int i=1;i<n-1;i++){
        ll x1=abs(v[i]-v[i-1]);
        ll x2=abs(v[i]-v[i+1]);
        p1.pb((x2<=x1)?1:x2);
    }
    for(int i=n-1;i>0;i--){
        if(i==n-1)p2.pb(1);
        else{
            ll x1=abs(v[i]-v[i-1]);
            ll x2=abs(v[i]-v[i+1]);
            p2.pb((x2>=x1)?1:x1);
        }
    }
    p2.pb(0);
    reverse(all(p2));
    f(i,1,n){
        p1[i]+=p1[i-1];
        p2[i]+=p2[i-1];
    }
    // for(auto x:p1) ct(x)
    // elc
    // for(auto x:p2) ct(x)
    // elc
    ll q;
    cin>>q;
    while(q--){
        ll a,b;
        cin>>a>>b;
        a--,b--;
        if(a<=b) co(p1[b]-p1[a])
        else co(p2[a]-p2[b])
    }
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