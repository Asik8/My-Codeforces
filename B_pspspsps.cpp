#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n-1;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin>>s;
        set<char>st;
        if(s[0]=='s') s[0]='.';
        if(s[n-1]=='p') s[n-1]='.';
        for(auto c:s) if(c!='.')st.insert(c);
        if(st.size()<=1) py else pn
    }
    return 0;
}