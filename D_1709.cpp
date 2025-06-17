#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n;
    cin >> n;
    vector <ll> a(n),b(n);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    vector<pi>ans;
    if(n==1){
        if(a[0]>b[0]){
            swap(a[0],b[0]);
            ans.pb({3,1});
        }
    }
    forni{
        if(a[i]>b[i]){
            ans.pb({3,i+1});
            swap(a[i],b[i]);
        }
    }
    for(int i=n-1;i>0;i--){
        if(a[i]<a[i-1]){
            swap(a[i],a[i-1]);
            ans.pb({1,i});
        }
        if(b[i]<b[i-1]){
            swap(b[i],b[i-1]);
            ans.pb({2,i});
        }
        // if(a[i]>b[i]){
        //     swap(a[i],b[i]);
        //     ans.pb({3,i+1});
        // }
    }
    if(a.back()>b.back()) ans.pb({3,n});
    if(sz(ans)==0) co(0)
    else{
        co(sz(ans))
        for(auto [x,y]:ans) cout<<x<<" "<<y<<el
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}