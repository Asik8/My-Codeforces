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
ll n;

ll ch(vector <ll> &v,ll l,ll r){
    if(r-l==1) return 0;
    ll m=(l+r)>>1;
    ll m1=*max_element(v.begin()+l,v.begin()+m);
    ll m2=*max_element(v.begin()+m,v.begin()+r);
    ll ans=0;
    if(m1>m2){
        ans++;
        for(int i=0;i<(m-l);i++){
            swap(v[l+i],v[m+i]);
        }
    }
    return ch(v,l,m)+ch(v,m,r)+ans;
}

void asikM(){
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll ans=ch(v,0,n);
    if(is_sorted(all(v))) co(ans)
    else co(-1)
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