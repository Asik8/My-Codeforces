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

bool ch(ll l,ll n){
    return l>=0 && l<n;
}

void asikM(){
    ll n;
    cin >> n;
    string a,b;
    cin>>a>>b;
    ll even1=0,odd1=0,even0=0,odd0=0;
    for(int i=0;i<n;i+=2){
        if(a[i]=='1') even1++;
        if(b[i]=='0') even0++;
    }
    for(int i=1;i<n;i+=2){
        if(a[i]=='1') odd1++;
        if(b[i]=='0') odd0++;
    }
    if(even1<=odd0 && odd1<=even0) py else pn
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