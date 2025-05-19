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
    if(n==2 && s=="21" || s=="12"){
        pn
        return;
    }
    vec(ll) in;
    char c[n][n];
    fl(i,0,n) if(s[i]=='2') in.pb(i);
    ll k=sz(in);
    if(k==1 || k==2){
        pn
        return;
    }
    memset(c,'=',sizeof(c));
    forni c[i][i]='X';
    fl(i,0,k){
        ll x=in[i],y=in[(i+1)%k];
        c[x][y]='+';
        c[y][x]='-';
    }
    py
    forni{
        fl(j,0,n) cout<<c[i][j];
        elc
    }
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