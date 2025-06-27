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
    vector <pi> odd,even,ans;
    for (int i=0;i<2*n;i++){
        ll x;
        cin >>x;
        if(x&1) odd.pb({x,i+1});
        else even.pb({x,i+1});
    }
    ll l=even.size()/2,r=0;
    while(l){
        ans.pb({even[r].second,even[r+1].second});
        r+=2;
        l--;
    }
    l=odd.size()/2,r=0;
    while(l){
        ans.pb({odd[r].second,odd[r+1].second});
        r+=2;
        l--;
    }
    for(int i=0;i<n-1;i++){
        auto [x,y]=ans[i];
        cout<<x<<' '<<y<<el
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