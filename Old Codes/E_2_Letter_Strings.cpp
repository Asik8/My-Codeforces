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
    ll n,c=0;
    cin >> n;
    map<char,ll> m1,m2;
    map<string,ll>m;
    while(n--){
        string s;
        cin>>s;
        c+=m1[s[0]]+m2[s[1]]-2*m[s];
        m1[s[0]]++;
        m2[s[1]]++;
        m[s]++;
    }
    co(c)
    m1.clear();
    m2.clear();
    m.clear();
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