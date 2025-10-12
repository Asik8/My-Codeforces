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
#define co(x1) {cout<<x1<<"\n"; return;}
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
    ll n;
    cin>>n;
    map<ll,ll>m;
    vector<ll>v(n);
    for(auto& x:v){
        cin>>x;
        m[x]++;
    } 
    ll c=0,ans=0;
    priority_queue<ll>pq;
    acp(m,x,y){
        if(y&1){
            c+=(y-1);
            ans+=(x*(y-1));
            pq.push(x);
        } else{
            c+=y;
            ans+=(x*y);
        }
    }
    if(!c) co(0)
    if(sz(pq)){
        bool f=false;
        while(sz(pq)>1){
            ll x=pq.top();
            pq.pop();
            ll y=pq.top();
            if(abs(x-y)<ans){
                f=true;
                c+=2;
                ans+=(x+y);
                break;
            }
        }
        if(!f && pq.top()<ans){
            ans+=pq.top();
            c++;
        }
    }
    if(c<3)co(0) else co(ans)
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