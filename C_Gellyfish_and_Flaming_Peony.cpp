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
    ll n,c=0;
    cin >> n;
    vector <ll> v(n);
    bool f=false,odd=false,even=false;
    for (auto& x:v){
        cin >>x; 
        if(x==1) f=true;
        else c++;
        if(x&1) odd=true;
        if(!(x&1)) even=true;
    }
    if(f){
        co(c)
        return;
    }
    c=0;
    forni{
        fl(j,0,n){
            if(i!=j && __gcd(v[i],v[j])==1){
                co(n)
                return;
            }
        }
    }
    fl(i,1,n){
        if(__gcd(v[0],v[i])!=v[0]){
            v[0]=__gcd(v[0],v[i]);
            c++;
        }
    }
    fl(j,1,n){
        if(v[j]!=v[0]) c++;
    }
    co(c)
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