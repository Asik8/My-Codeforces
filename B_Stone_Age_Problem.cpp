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
    ll n,q;
    cin >> n>>q;
    vector <ll> v(n);
    map<ll,ll>m;
    forni{
        cin>>v[i];
        m[i]=v[i];
    } 
    ll s=accumulate(all(v),0LL);
    ll alle;
    while(q--){
        ll x;
        cin>>x;
        if(x==1){
            ll a,b;
            cin>>a>>b;
            if(m[a-1]==0){
                s-=alle;
                s+=b;
                m[a-1]=b;
            } else{
                s-=m[a-1];
                s+=b;
                m[a-1]=b;
            }
        } else {
            ll a;
            cin>>a;
            alle=a;
            m.clear();
            s=(a*n);
        }
        co(s)
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}