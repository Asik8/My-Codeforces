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
    string s,h;
    cin>>s>>h;
    map<char,ll>m1;
    for(auto x:s) m1[x]++;
    f(i,0,sz(h)){
        map<char,ll> m2;
        for(int j=i;j<sz(h);j++){
            m2[h[j]]++;
            if(m1==m2){
                py
                return;
            }
        }
    }
    pn
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