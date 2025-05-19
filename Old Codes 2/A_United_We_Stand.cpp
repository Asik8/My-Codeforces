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
    ll m=*min_element(v.begin(),v.end());
    vec a,b;
    forni{
        if(v[i]==m) a.pb(v[i]);
        else b.pb(v[i]);
    }
    bool f= true;
    for(int i=0;i<b.size();i++){
        if(!(m%b[i])){
            f=false;
            break;
        }
    }
    if(!f || a.size()==0 || b.size()==0){
        co(-1)
        return;
    }
    cout<<a.size()<<" "<<b.size()<<endl;
    for(auto x:a) cout<<x<<" ";
    cout<<endl;
    for(auto x:b) cout<<x<<" ";
    cout<<endl;
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