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
    vector <ll> a(n+1),mx(n+1),ps(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    ll m=a[1];
    fl(i,1,n+1){
        mx[i]=max(m,a[i]);
        m=max(m,a[i]);
    }
    ps[n]=a[n];
    for(int i=n-1;i>0;i--) ps[i]=ps[i+1]+a[i];
    // flx(ps)
    ll k=1;
    for(int i=1;i<n+1;i++){
        if(i==1) ct(mx[n])
        else{
            ll rm=(n-k)+1;
            ct(ps[rm]+mx[n-i+1])
            k++;
        }
    }
    elc
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