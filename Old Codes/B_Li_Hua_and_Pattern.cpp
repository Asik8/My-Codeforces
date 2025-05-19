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
    ll n,k;
    cin >> n >> k;
    int a[n][n];
    fl(i,0,n){
        fl(j,0,n){
            cin >> a[i][j];
        }
    }
    ll c = 0;
    fl(i,0,n){
        fl(j,0,n){
            int ni = n - i - 1;
            int nj = n - j - 1;
            if(a[i][j] != a[ni][nj]) c++;
        }
    }
    c/=2;
    if(c>k){
        pn
        return;
    }
    k-=c;
    if(k && !(n&1) && k&1) pn else py
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