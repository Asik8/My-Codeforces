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

bool ch(string s,ll m){
    ll n=sz(s);
    f(i,m,n/2){
        if(s[i]!=s[n-1-i]){
            return false;
        }
    }
    multiset<char> m1,m2;
    f(i,0,m) m1.insert(s[i]);
    for(int i=n-1;i>=m && i>=n-m;i--){
        if(m1.find(s[i]) !=m1.end()){
            m1.erase(m1.find(s[i]));
        }
        else return false;
    }
    return true;
}

void asikM(){
    string s,t;
    cin>>s;
    ll x=0;
    while(x<sz(s)){
        if(s[x]!=s[sz(s)-1-x]) break;
        else x++;
    }
    if(x==sz(s)){
        co(0)
        return;
    }
    f(i,x,sz(s)-x) t+=s[i];
    s=t;
    reverse(all(t));
    ll n=sz(s),l=0,r=n,m;
    while(l<r){
        ll m=(l+r)/2;
        if(ch(s,m) || ch(t,m)) r=m;
        else l=m+1;
    }
    co(l)
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