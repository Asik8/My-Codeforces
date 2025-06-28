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
    sort(all(v));
    if(n&1){
        pn
        return;
    }
    ll l=0,r=n/2,in=0;
    vec(ll)ans(n);
    while(r<n){
        ans[in++]=v[l++];
        ans[in++]=v[r++];
    }
    // flx(ans)
    bool f=false;
    if(ans[0]<ans[1] && ans[0]<ans[n-1]) f= true;
    else if(ans[0]>ans[1] && ans[0]>ans[n-1]) f= true;
    if(f){
        for(int i=1;i<n-1;i++){
            if(ans[i]<ans[i+1] && ans[i]<ans[i-1]) f= true;
            else if(ans[i]>ans[i+1] && ans[i]>ans[i-1]) f= true;
            else{
                f=false;
                break;
            }
        }
    }
    if(f){
        if(ans[n-1]<ans[n-2] && ans[n-1]<ans[0]) f= true;
        else if(ans[n-1]>ans[n-2] && ans[n-1]>ans[0]) f= true;
    }
    if(f){
        py
        flx(ans)
    }
    else pn
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