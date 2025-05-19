#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>
vec primes={2,3,5,7,11,13,17,19,23,29,31};

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    map<ll,vec>mp;
    forni{
        f(j,0,11){
            if(!(v[i]%primes[j])){
                mp[primes[j]].pb(i);
                break;
            }
        }
    }
    vec ans(n);
    ll c=1;
    for(auto [x,y]:mp){
        for(auto l:y) ans[l]=c;
        c++;
    }
    co(sz(mp))
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}