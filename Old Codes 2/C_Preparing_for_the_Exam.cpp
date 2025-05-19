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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m,k;
        string s;
        cin>>n>>m>>k;
        vector <ll> a(m),b(k);
        map<ll,ll>mp;
        set<ll>st,st2;
        for (auto& x:a) cin >>x;
        for (auto& x:b){
            cin >>x;
            st2.insert(x);
        }
        f(i,1,n+1) st.insert(i);
        for(int i=0;i<m;i++){
            st.erase(a[i]);
            bool f=false;
            if(st2.find(a[i]) != st2.end()){
                f= true;
                st2.erase(a[i]);
            }
            if(st == st2) s+='1';
            else s+='0';
            st.insert(a[i]);
            if(f) st2.insert(a[i]);
        }
        co(s)
    }
    return 0;
}
