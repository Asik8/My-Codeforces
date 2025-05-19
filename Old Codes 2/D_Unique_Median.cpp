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
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll ev=0;
    for(int l=1;l<=10;l++){
        vec b(n);
        forni b[i]=(v[i]<=l)? -1:1;
        map<ll,ll>mp,m1;
        ll c=0;
        mp[0]=1;
        m1[0]=1;
        forni{
            c+=b[i];
            if(v[i]==l) m1.clear();
            ev+=mp[c]-m1[c];
            m1[c]++;
            mp[c]++;
        }
    }
    ll ans=((1LL*n*(n+1)/2)-ev);
    co(ans)
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