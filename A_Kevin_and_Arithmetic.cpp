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
    ll n,s=0,c=0;
    cin >> n;
    vector <ll> v,od;
    forni{
        ll x;
        cin>>x;
        if(!(x%2)) v.pb(x);
        else od.pb(x);
    }
    v.insert(v.end(),od.begin(),od.end());
    forni{
        s+=v[i];
        if(!(s%2)){
            c++;
            while(!(s%2)) s/=2;
        }
    }
    co(c)
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