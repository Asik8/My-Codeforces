#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

bool ch(ll i,ll j, ll n, ll m){
    return (i>=0 && i<n && j>=0 && j<m);
}

vec(pi) d={{-1,0},{1,0},{0,1},{0,-1}};

void asikM(){
    ll n,m;
    cin>>n>>m;
    int a[n][m];
    forni{
        fl(j,0,m,1){
            cin>>a[i][j];
        }
    } 
    // forni{
    //     fl(j,0,m,1){
    //         ct(a[i][j])
    //     }
    //     elc
    // } elc
    forni{
        fl(j,0,m,1){
            if(a[i][j]){
                ll nd=0;
                acp(d,x,y){
                    if(ch(i+x,j+y,n,m)){
                        nd++;
                    }
                }
                // cout<<i<<" "<<j<<" "<<nd<<el
                if(nd<a[i][j]){
                    pn 
                    return;
                }
            }
        }
    } 
    forni{
        fl(j,0,m,1){
            if(i==0 && j==0 || i==0 && j==m-1 || i==n-1&&j==0 || i==n-1&&j==m-1) a[i][j]=2;
            else if(i==0 && j>0 && j<m-1 || j==0 && i>0 && i<n-1 || i==n-1 && j>0 && j<m-1 || j==m-1 && i>0 && i<n-1) a[i][j]=3;
            else a[i][j]=4;
        }
    } py
    forni{
        fl(j,0,m,1){
            ct(a[i][j])
        }
        elc
    } 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}