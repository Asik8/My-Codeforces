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
    ll n,m;
    cin >> n>>m;
    vector <vec> v(n);
    forni{
        for(int j=0;j<m;j++){
            ll x;
            cin>>x;
            v[i].pb(x);
        }
        sort(v[i].begin(),v[i].end());
    } 
    vec ans(n);
    vector<pair<ll,ll>>in;
    forni in.pb({v[i][0],i+1});
    sort(in.begin(),in.end());
    sort(v.begin(),v.end());
    ll mx=-1;
    bool f=true;
    for(int j=0;j<m;j++){
        forni{
            if(v[i][j]>mx) mx=v[i][j];
            else{
                f=false;
                break;
            }
        }
        if(!f) break;
    }
    if(f){
        for(auto x:in) cout<<x.second<<" ";
        cout<<endl;
    }
    else co(-1)
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