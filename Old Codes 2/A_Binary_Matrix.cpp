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
    ll n,m;
    cin >> n>>m;
    vec(string) s(n);
    fl(i,0,n) cin>>s[i];
    vector <ll> a(n),b(m);
    fl(i,0,m){
        ll cnt=0;
        fl(j,0,n){
            if(s[j][i]=='1') cnt++;
        }
        b[i]=cnt;
    }
    fl(i,0,n){
        ll cnt=0;
        fl(j,0,m){
            if(s[i][j]=='1') cnt++;
        }
        a[i]=cnt;
    }
    ll c1=0,c2=0;
    fl(i,0,n) if(a[i]%2) c1++;
    fl(i,0,m) if(b[i]%2) c2++;
    // cout<<c1<<" "<<c2<<el
    co(max(c1,c2))
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