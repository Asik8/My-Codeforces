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
    char ch;
    cin >> n>>ch;
    string s;
    cin>>s;
    vec(ll)in;
    forni if(s[i]!=ch) in.pb(i+1);
    if(sz(in)==0){
        co(0)
        return;
    }
    for(int i=1;i<=n;i++){
        ll c=0;
        for(int j=i;j<=n;j+=i) c+=(s[j-1]!=ch);
        if(!c){
            co(1)
            co(i)
            return;
        }
    }
    co(2)
    cout<<n-1<<" "<<n<<el
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