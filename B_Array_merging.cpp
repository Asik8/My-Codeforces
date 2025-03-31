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
    vector <ll> a(n),b(n),la(2*n+1,0),lb(2*n+1,0);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    ll c=1,mx=0;
    fl(i,1,n){
        if(a[i]==a[i-1]) c++;
        else{
            la[a[i-1]]=max(la[a[i-1]],c);
            c=1;
        }
    }
    la[a[n-1]]=max(la[a[n-1]],c);
    c=1;
    fl(i,1,n){
        if(b[i]==b[i-1]) c++;
        else{
            lb[b[i-1]]=max(lb[b[i-1]],c);
            c=1;
        }
    }
    lb[b[n-1]]=max(lb[b[n-1]],c);
    fl(i,0,(2*n)+1){
        la[i]+=lb[i];
        mx=max(la[i],mx);
    }
    co(mx)
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