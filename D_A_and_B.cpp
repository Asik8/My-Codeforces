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
    string s;
    cin>>s;
    vector<int> pa, pvb;
    forni{
        if (s[i] == 'a') pa.pb(i);
        else pvb.pb(i);
    }
    ll c1=0,c2=0,ca=pa.size(),cb=pvb.size();
    if(ca>0){
        vector<ll> qA;
        fl(i,0,ca)  qA.pb(pa[i] - i);
        sort(all(qA));
        ll md=qA[ca / 2];
        fl(i,0,ca)  c1 += abs(qA[i] - md);
    }
    if(cb > 0) {
        vector<ll> qB;
        fl(i,0,cb)  qB.pb(pvb[i] - i);
        sort(all(qB));
        ll md=qB[cb / 2];
        fl(i,0,cb) c2 += abs(qB[i] - md);
    }
    co(min(c1, c2))
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