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
    n++;
    vector <ll> v(n+1);
    bool f=false;
    for(int i=2;i<=n;i++){
        if(v[i]) continue;
        v[i]=1;
        for(int j=i+i;j<=n;j+=i){
            v[j]=2;
            f=true;
        }
    }
    if(f) co(2)
    else co(1)
    for(int i=2;i<=n;i++) cout<<v[i]<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    asikM();      
    return 0;
}