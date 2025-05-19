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
    ll n,l,r,c=0;
    cin>>n>>l>>r;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    sort(v.begin(),v.end());
    forni{
        c+=upper_bound(v.begin(),v.end(),r-v[i])-v.begin();
        c-=lower_bound(v.begin(),v.end(),l-v[i])-v.begin();
        if(l<=2*v[i] && 2*v[i]<=r) c--;
    }
    co(c/2)
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}