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

bool isPerfectSquare(ll x) {
    if (x < 0) return false;
    ll s = sqrt(x);
    return ((s * s) == x);
}

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n);
    if(n==1 || isPerfectSquare(((n*(n+1))/2))){
        co(-1)
        return;
    }
    for(int i=0;i<n;i++) v[i]=n-i;
    // for(auto x:v) ct(x)
    // elc
    ll s=0;
    forni{
        // co(s)
        s+=v[i];
        if(isPerfectSquare(s)){
            if(i<n-1){
                s-=v[i];
                s+=v[i+1];
                swap(v[i],v[i+1]);
            }
        }
        // co(s)
    }
    for(auto x:v) ct(x)
    elc
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