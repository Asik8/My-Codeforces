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
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,m;
    cin >> n>>m;
    vector <ll> a(n),b(m);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    sort(all(b));
    ll prev=LLONG_MIN;
    forni{
        auto it=lower_bound(all(b),a[i]+prev);
        if(it != b.end()){
            ll c= *it;
            if(a[i]<prev) a[i]=c-a[i];
            else a[i]=min(a[i],c-a[i]);
        }
        if(a[i]<prev){
            pn
            return;
        }
        prev=a[i];
    }
    py
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
