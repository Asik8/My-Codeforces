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

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x;
    map<ll,ll>mp;
    forni{
        for(int j=2;j*j<=v[i];j++){
            while(!(v[i]%j)){
                mp[j]++;
                v[i]/=j;
            }
        }
        if(v[i]>1) mp[v[i]]++;
    } 
    bool f=true;
    for(auto x:mp){
        if(x.second%n){
            f=false;
            break;
        }
    }
    if(f) py else pn
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

