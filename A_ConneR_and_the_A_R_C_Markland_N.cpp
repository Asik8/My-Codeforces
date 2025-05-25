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
    ll n,f,k;
    cin >> n>>f>>k;
    set<ll>s;
    fl(i,0,k){
        ll x;
        cin>>x;
        s.insert(x);
    }
    ll d1=f,d2=f;
    while(s.count(d1)) d1++;
    while(s.count(d2)) d2--;
    // cout<<d1<<" "<<d2<<el
    if(d1>n) d1=-1;
    if(d2<1) d2=-1;
    if(d1!=-1) d1=d1-f;
    if(d2!=-1) d2=f-d2;
    // cout<<d1<<" "<<d2<<el
    if(d1!=-1 && d2!=-1){
        if(d1<=d2) co(d1)
        else co(d2)
        return;
    } else if(d1==-1 && d2!=-1) co(d2)
    else co(d1)
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