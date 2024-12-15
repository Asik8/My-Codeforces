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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll>a(n),b(n-1);
        for(auto &x:b) cin>>x;
        a[0]=b[0];
        a[n-1]=b[n-2];
        f(i,1,n-1) a[i]=(b[i]|b[i-1]);
        bool f=true;
        for(int i=0;i+1<n;i++){
            if(b[i]!=(a[i]&a[i+1])){
                f=false;
                break;
            }
        }
        if(!f) co(-1)
        else{
            for(auto x:a) cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}