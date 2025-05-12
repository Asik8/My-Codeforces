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

vector<ll>divisors(ll n){
    vector<ll>v;
    for(ll i=1;i*i<=n;i++){
        if(!(n%i)){
            v.pb(i);
            if((n/i) != i) v.pb(n/i);
        }
    }
    sort(allr(v));
    return v;
}

bool ch(vector<ll>v){
    ll l=0,r=sz(v)-1;
    while(l<r){
        if(v[l]!=v[r]){
            return false;
        }
        l++,r--;
    }
    return true;
}

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll l=0,r=n-1,val=-1;
    while(l<r && val==-1){
        if(v[l]<v[r]) val=v[r]-v[l];
        else if(v[l]>v[r]) val=v[l]-v[r];
        l++,r--;
    }
    if(val==-1 && ch(v)){
        co(0)
        return;
    }
    vec(ll) a=divisors(val);
    for(auto x:a){
        vec(ll) b=v;
        forni b[i]%=x;
        if(ch(b)){
            co(x)
            return;
        }
    }
    co(0)
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