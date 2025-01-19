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
    vec p;
    for(int i=n+1;;i++){
        ll l=1;
        for(int j=2;j*j<=i;j++){
            if(!(i%j)){
                l=0;
                break;
            }
        }
        if(l){
            p.pb(i);
            break;
        }
    }
    for(int i=p.back()+n;;i++){
        ll l=1;
        for(int j=2;j*j<=i;j++){
            if(!(i%j)){
                l=0;
                break;
            }
        }
        if(l){
            p.pb(i);
            break;
        }
    }
    cout<<min(1ll*p[0]*p[1],1ll*p[0]*p[0]*p[0])<<endl;
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