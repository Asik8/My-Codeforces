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
#define pi pair<ll,ll>

void asikM(){
    ll n;
    cin >> n;
    vector<ll>a(n),b(n);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    vector <pi> v(n);
    forni v[i]={b[i]-a[i],i};
    sort(v.rbegin(),v.rend());
    ll l=0,r=n-1,c=0;
    while(l<r){
        if(v[l].first+v[r].first>=0){
            c++;
            l++;
            r--;
        }
        else r--;
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