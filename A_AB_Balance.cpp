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
    if(sz(s)==1){
        co(s)
        return;
    }
    ll ab=0,ba=0;
    for(int i=0;i<sz(s)-1;i++){
        if(s[i]=='a' && s[i+1]=='b') ab++;
        if(s[i]=='b' && s[i+1]=='a') ba++;
    }
    if(ab==ba){
        co(s)
        return;
    }
    if(ab>ba){
        if(s[0]=='a')s[0]='b';
        else if(s[sz(s)-1]=='b') s[sz(s)-1]='a';
    }
    else{
        if(s[0]=='b')s[0]='a';
        else if(s[sz(s)-1]=='a') s[sz(s)-1]='b';
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