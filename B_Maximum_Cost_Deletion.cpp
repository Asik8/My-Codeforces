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
    ll n,a,b;
    cin >> n>>a>>b;
    string s;
    cin>>s;
    ll m1=n*(a),m2=0,l=0,r=0,a1=0,a2=0;
    while(r<n){
        while(r+1<n && s[r]==s[r+1]) r++;
        if(s[r]=='1') a1++; else a2++;
        r++;
    }
    l=count(all(s),'0'),r=count(all(s),'1');
    if(b>=0) m1+=(n*b);
    else m1+=((min(a1,a2)+1)*b);
    co(m1)
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