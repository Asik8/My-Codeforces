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
    ll n,m,k,ans=0;
    cin >> n>>m>>k;
    vector <ll> a(n),b(m);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    map<ll,ll>m1,m2;
    for(auto x:b) m1[x]++;
    ll l=0,r=0,c=0;
    while(r<n){
        m2[a[r]]++;
        if(m1[a[r]]>0 && m1[a[r]]>=m2[a[r]])c++;
        if(r-l+1==m){
            if(c>=k) ans++;
            m2[a[l]]--;
            if(m1[a[l]]>0 && m2[a[l]]<m1[a[l]]) c--;
            l++;
        }
        r++;
    }
    co(ans)
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