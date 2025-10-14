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
    vector<ll>v(n);
    set<ll>s;
    for(auto& x:v){
        cin>>x; 
        s.insert(x);
    }
    if(sz(s)==1) co(0)
    if(*s.begin()==1) co(-1)
    vec(pi) a;
    forni{
        fl(j,0,n,1){
            if(i!=j){
                while(v[i]!=v[j]){
                    if(v[i]>v[j]){
                        v[i]=(v[i]+v[j]-1)/v[j];
                        a.pbk({i+1,j+1});
                    } else{
                        v[j]=(v[j]+v[i]-1)/v[i];
                        a.pbk({j+1,i+1});
                    }
                }
            }
        }
        // flx(v)
    }
    // flx(v)
    cout<<sz(a)<<el
    acp(a,x,y) cout<<x<<" "<<y<<el
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