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
    ll r,g,b,w,en=0,od=0,c1=0,c2=0;
    cin>>r>>g>>b>>w;
    if(r==g && g==b){
        pys
        return;
    }
    if(r&1) od++; else en++;
    if(g&1) od++; else en++;
    if(b&1) od++; else en++;
    if(w&1) od++; else en++;
    if(od<=1){
        pys
        return;
    }
    if(r>0 && b>0 && g>0){
        r--;
        g--;
        b--;
        w+=3;
    }
    en=0,od=0;
    if(r&1) od++; else en++;
    if(g&1) od++; else en++;
    if(b&1) od++; else en++;
    if(w&1) od++; else en++;
    if(od<=1){
        pys
        return;
    }
    pns
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