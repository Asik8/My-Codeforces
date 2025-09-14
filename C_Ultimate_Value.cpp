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
    ll n,c=0;
    cin >> n;
    vector <pi> o,e;
    forni{
        ll x;
        cin>>x;
        if(i&1) o.pb({x,i});
        else e.pb({x,i});
    }
    sort(all(e));
    sort(allr(o));
    ll os=accumulate(all(o),0LL),es=accumulate(all(e),0LL);
    if(es<=os && e[0].first<o[0].first){
        swap(e[0],o[0]);
        c+=abs(e[0].second-o[0].second);
    }
    co(c+accumulate(all(o),0LL)-accumulate(all(o),0LL))
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