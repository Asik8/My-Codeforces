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

vector<ll> generate_fib(ll n) {
    vector<ll> fib(n + 2);
    fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i <= n + 1; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib;
}

void asikM(){
    ll n,m;
    cin >> n>>m;
    vector <ll> v=generate_fib(n);
    ll mn=v[n],mx=v[n+1];
    string ans;
    while(m--){
        ll w,l,h;
        cin>>w>>l>>h;
        vector<ll>a={w,l,h};
        sort(all(a));
        if(a[0]>=mn && a[2]>=mx) ans+='1';
        else ans+='0';
    }
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