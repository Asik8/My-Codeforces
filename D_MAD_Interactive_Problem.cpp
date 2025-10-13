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

void qr(vec(ll) v, bool f){
    if(f){
        ct("?")
        ct(sz(v))
        acv(v,x) ct(x)
        elc
    } else{
        ct("?")
        ct(sz(v))
        flr(i,sz(v)-1,0,1) ct(v[i])
        elc
    }
    cout.flush();
}

void asikM(){
    ll n;
    cin>>n;
    n*=2;
    vector<ll>ans(n,-1),q;
    fl(i,0,n,1){
        q.pbk(i+1);
        ll x;
        qr(q,true);
        cin>>x;
        if(x!=0){
            ans[i]=x;
            q.pop_back();
        }
    }
    q.clear();
    flr(i,n-1,0,1){
        ll x;
        q.pbk(i+1);
        if(ans[i]==-1){
            qr(q,false);
            cin>>x;
            if(x!=0){
                ans[i]=x;
                q.pop_back();
            }
        }
    }
    ct('!')
    flx(ans)
    cout.flush();
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