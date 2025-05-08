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
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll ne=0,pos=0,s=0;
    forni{
        if(v[i]<0) ne+=v[i]/2;
        else if(v[i]>0) pos+=v[i]/2;
    }
    ll need=abs(pos-abs(ne));
    // cout<<ne<<" "<<pos<<" "<<need<<el
    // elc
    if(abs(ne)<pos){
        forni{
            if(v[i]<0){
                ll r=(v[i]-1)/2;
                ll l=(v[i]/2);
                if(abs(l)<abs(r) && need){
                    need--;
                    ct(r)
                } else ct(l)
            }
            else if(v[i]>0) ct(v[i]/2)
            else ct(v[i])
        }
    } else{
        forni{
            if(v[i]<0)ct(v[i]/2)
            else if(v[i]>0){ 
                ll r=(v[i]+1)/2;
                ll l=(v[i]/2);
                if(abs(l)<abs(r) && need){
                    need--;
                    ct(r)
                } else ct(l)
            }
            else ct(v[i])
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}