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
    string s;
    cin>>s;
    if(s=="AB"){
        co("Alice")
        return;
    }
    if(s=="BA"){
        co("Bob")
        return;
    }
    ll a=count(all(s),'A');
    ll b=count(all(s),'B');
    if(b>=2 && s[0]=='B' && s.back()=='B'){
        co("Bob")
        return;
    }
    if(b>=2 && s.back()=='B'){
        co("Bob")
        return;
    }
    ll ain=-1,bin=-1;
    fl(i,1,n-1) if(s[i]=='A') ain=i;
    fl(i,1,n-1) if(s[i]=='B') bin=i;
    // cout<<ain<<" "<<bin<<el
    if(b>=2 && s[0]=='B' && ain<bin){
        co("Bob")
        return;
    }
    else co("Alice")
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