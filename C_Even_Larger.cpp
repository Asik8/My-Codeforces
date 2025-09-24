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
    for (auto& x:v) cin >>x; 
    for(int i=1;i<n-1;i+=2){
        if(v[i]<v[i-1]+v[i+1]){
            ll s=v[i-1]+v[i+1];
            ll red=s-v[i];
            c+=red;
            if(red<=v[i+1]) v[i+1]-=red;
            else{
                red-=v[i+1];
                v[i+1]=0;
                v[i-1]-=red;
            }
        }
    }
    if(!(n&1) && v[n-1]<v[n-2]) c+=v[n-2]-v[n-1];
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