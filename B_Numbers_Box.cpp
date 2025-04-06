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

bool ch(int i, int j, int n, int m){
    return i>=0 && i<n && j>=0 && j<m;
}

vec(pi)d={{0,1},{1,0},{-1,0},{0,-1}};

void asikM(){
    ll n,m,ng=0,z=0,mn=INT_MAX,s=0;
    cin >> n>>m;
    int a[n][m];
    fl(i,0,n){
        fl(j,0,m){
            cin>>a[i][j];
            if(a[i][j]<0) ng++;
            else if(a[i][j]==0) z++;
            mn=min(mn,(ll)abs(a[i][j]));
            s+=abs(a[i][j]);
        }
    }
    if(ng>0 && (ng&1) && z==0) co(s-2*mn)
    else co(s)
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