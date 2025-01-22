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
    map<pair<ll,pair<ll,ll>>,ll>tr;
    map<pair<ll,ll>,ll>m1,m2,m3;
    ll c=0;
    for(int i=0;i<n-2;i++){
        ll l=tr[{v[i],{v[i+1],v[i+2]}}];
        c+=m1[{v[i],v[i+1]}]-l;
        c+=m2[{v[i],v[i+2]}]-l;
        c+=m3[{v[i+1],v[i+2]}]-l;
        tr[{v[i],{v[i+1],v[i+2]}}]++;
        m1[{v[i],v[i+1]}]++;
        m2[{v[i],v[i+2]}]++;
        m3[{v[i+1],v[i+2]}]++;
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