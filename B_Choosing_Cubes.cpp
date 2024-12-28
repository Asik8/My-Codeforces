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
    ll n,f,k,fav=0;
    cin >> n>>f>>k;
    vector <ll> v(n);
    map<ll,ll>m1,m2;
    for (auto& x:v){
        cin >>x; 
        m1[x]++;
    }
    fav=v[f-1];
    sort(v.begin(),v.end(),greater<ll>());
    for(int i=k;i<n;i++){
        m2[v[i]]++;
    }
    if(m1[fav] != m2[fav] && m2[fav]==0) py
    else if(m1[fav] != m2[fav] && m2[fav]>0) co("MAYBE")
    else pn
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        asikM();      
    }
    return 0;
}