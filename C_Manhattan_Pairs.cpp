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
    ll n;
    cin >> n;
    vector <pair<ll,ll>> a(n),b(n);
    forni{
        cin>>a[i].first;
        cin>>b[i].first;
        a[i].second=i;
        b[i].second=i;
    }
    sort(all(a));
    sort(all(b));
    vec(ll)c(n),d(n),t1,t2,t3,t4;
    forni{
        c[a[i].second]=i;
        d[b[i].second]=i;
    }
    forni{
        if(c[i]<(n/2) && d[i]<(n/2)) t1.pb(i);
        else if(c[i]>=(n/2) && d[i]<(n/2)) t2.pb(i);
        else if(c[i]>=(n/2) && d[i]>=(n/2)) t3.pb(i);
        else t4.pb(i);
    }
    vector<pi> ans;
    fl(i,0,sz(t1)) ans.pb({t1[i],t3[i]});
    fl(i,0,sz(t2)) ans.pb({t2[i],t4[i]});
    for(auto [x,y]:ans) cout<<x+1<<" "<<y+1<<el
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