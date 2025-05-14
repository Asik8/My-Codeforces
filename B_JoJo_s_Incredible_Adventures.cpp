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
    string s;
    cin>>s;
    if(count(all(s),'0')==sz(s)){
        co(0)
        return;
    }
    if(count(all(s),'1')==1){
        co(1)
        return;
    }
    ll mx=INT_MIN;
    ll l=0,r=sz(s)-1,c=0;
    if(count(all(s),'1')==sz(s)){
        co(sz(s)*sz(s))
        return;
    }
    while(s[l++]=='1') c++;
    while(s[r--]=='1') c++;
    mx=max(mx,c);
    r=0,c=0;
    while(r<sz(s)){
        if(s[r]=='1') c++;
        if(s[r]=='0'){
            mx=max(mx,c);
            c=0;
        }
        r++;
    }
    co(((mx+1)/2)*((mx+2)/2))
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