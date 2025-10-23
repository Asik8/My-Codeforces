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

void asikM(){
    ll n,m;
    cin>>n>>m;
    ll v[n][m],ans[n][m]={-1};
    memset(ans,-1,sizeof(ans));
    multiset<pi>ms;
    forni{
        fl(j,0,m,1){
            cin>>v[i][j];
            ms.insert({v[i][j],i});
        }
    }
    fl(j,0,m,1){
        auto &[val,in]=*ms.begin();
        ms.erase(ms.find({val,in}));
        ans[in][j]=val;
    }
    forni{
        multiset<ll>st;
        fl(j,0,m,1) st.insert(v[i][j]);
        fl(j,0,m,1) if(ans[i][j]!=-1) st.erase(st.find(ans[i][j]));
        fl(j,0,m,1){
            if(ans[i][j]==-1){
                ll x=*st.begin();
                st.erase(st.find(x));
                ans[i][j]=x;
            }
        }
    }
    forni{
        fl(j,0,m,1){
            ct(ans[i][j])
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