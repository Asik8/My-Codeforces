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
    ll n;
    cin >> n;
    auto ch=[&](ll x){
        x--;
        ll v=((x*(x+1))/2);
        return v>=n;
    };
    ll l=1,r=1e10,m,ans;
    while(l<=r){
        m=(l+r)/2;
        if(ch(m)){
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    ans--;
    if(((ans*(ans+1))/2)==n) co(ans+1)
    else{
        ans--;
        ll rem=ans+(n-((ans*(ans+1))/2));
        co(rem+1)
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}