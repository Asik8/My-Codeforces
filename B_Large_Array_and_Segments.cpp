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
    ll n,k,m,s1=0,in=-1;
    cin >> n>>k>>m;
    vector <ll> v(n);
    for(auto &x:v) cin>>x;
    fl(i,0,n){
        s1+=v[i];
        in=i+1;
        if(s1>=m){
            break;
        }
    }
    if(s1*k<m){
        co(0)
        return;
    } if(s1>=m){
        ll rm=n*k;
        co((rm-in)+1)
        return;
    }
    ll d = (m-1)/s1;
    ll remaining = m - (d * s1);
    ll cnt = (d * n);
    ll s = 0;
    for (ll i = 0; i < n; i++){
        s += v[i];
        cnt++;
        if (s >= remaining) break;
    }
    ll total = n * k;
    cout << ((total - cnt)+2 ) << el;
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

