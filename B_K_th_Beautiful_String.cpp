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
    ll n,k;
    cin >> n>>k;
    string s;
    if(k==1){
        fl(i,0,n-2) cout<<'a';
        co("bb")
        return;
    }
    auto ch=[&](ll mid){
        ll val=(mid*(mid+1))/2;
        return val<=k;
    };
    ll l=1,r=n,ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(ch(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    if((ans*(ans+1))/2 ==k){
        ll fa=(n-2)-(ans-1);
        fl(i,0,fa) s+='a';
        s+="bb";
        fl(i,0,ans-1) s+='a';
        co(s)
        return;
    }
    ll first_a=(n-2)-ans;
    fl(i,0,first_a) s+='a';
    s+='b';
    fl(i,0,ans) s+='a';
    s+='b';
    ll num=(ans*(ans+1))/2,in=n-1;
    num++;
    while(num<k){
        swap(s[in],s[in-1]);
        in--;
        num++;
    }
    co(s)
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