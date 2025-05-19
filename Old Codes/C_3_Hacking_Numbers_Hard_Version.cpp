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

void add(ll n){
    cout<<"add "<<n<<endl;
    ll r; cin>>r;
}

void mul(ll n){
    cout<<"mul "<<n<<endl;
    ll r; cin>>r;
}

void div(ll n){
    cout<<"div "<<n<<endl;
    ll r; cin>>r;
}

void digit(){
    cout<<"digit"<<endl;
    ll r; cin>>r;
}

void done(){
    cout<<"!"<<endl;
    ll r;
    cin>>r;
    if(r==-1) exit(0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        mul(999999999);digit();
        if(n!=81) add(n-81);
        done();
    }
    return 0;
}