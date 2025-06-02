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

ll digit(ll x){
    ll c=0;
    while(x){
        x/=10;
        c++;
    }
    return c;
}

void asikM(){
    string s;
    cin>>s;
    ll mx=0,in=0;
    for(int i=sz(s)-2;i>=0;i--){
        int x = s[i] - '0';
        int y = s[i+1] - '0';
        if(x+y>=10){
            mx=x+y;
            s[i]='0'+(mx/10);
            s[i+1]='0'+(mx%10);
            co(s)
            return;
        }
    } 
    string ans;
    int r=(s[0]-'0'+s[1]-'0');
    ans+=to_string(r);
    fl(i,2,sz(s)) ans+=s[i];
    co(ans)
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