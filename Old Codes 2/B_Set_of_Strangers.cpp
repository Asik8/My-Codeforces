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
    ll n,m;
    cin >> n>>m;
    int a[n][m];
    map<ll,ll>mp;
    f(i,0,n){
        f(j,0,m){
            cin>>a[i][j];
            mp[a[i][j]]=1;
        }
    }
    vec(pi)d={{0,1},{0,-1},{1,0},{-1,0}};
    auto ch=[&](int i,int j){
        return (i>=0 && i<n && j>=0 && j<m);
    };
    f(i,0,n){
        f(j,0,m){
            for(auto [x,y]:d){
                ll l=i+x,r=j+y;
                if(ch(l,r)){
                    if(a[l][r]==a[i][j])
                        mp[a[i][j]]=2;
                }
            }
        }
    }
    ll c=0,mx=0;
    for(auto [x,y]:mp){
        c+=y;
        mx=max(mx,y);
    }
    co(c-mx)
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