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
    ll a[n][n];
    auto ch=[&](ll i,ll j){
        return i>=0&&i<n && j>=0&& j<n;
    };
    ll num=(n*n)-1,l=n-1,r=0;
    memset(a,-1,sizeof(a));
    while(num>=0){
        while(r<n && a[l][r]==-1) a[l][r++]=num--;
        r--,l--;
        while(l>=0 && a[l][r]==-1) a[l--][r]=num--;
        l++,r--;
        while(r>=0 && a[l][r]==-1) a[l][r--]=num--;
        r++,l++;
        while(l<n && a[l][r]==-1) a[l++][r]=num--;
        l--,r++;
    }
    forni{
        fl(j,0,n){
            ct(a[i][j])
        }
        elc
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