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
    ll n,k;
    cin>>n>>k;
    for(int i=1;i<=(log2(n)+1);i++){
        ll x=pow(2,i);
        ll y=(n+(x/2))/x;
        if(k<=y){
            if(k==1){
                co(x/2)
                return;
            }
            else{
                co((x/2)+((k-1)*x));
                return;
            }
        }
        else k-=y;
    } 
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