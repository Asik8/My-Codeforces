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
        ll m,a,b,c,ans=0;
        cin>>m>>a>>b>>c;
        ll x=m,y=m;
        if(a<=x){
            ans+=a;
            x-=a;
        }
        else{
            ans+=x;
            x=0;
        }
        if(b<=y){
            ans+=b;
            y-=b;
        }
        else{
            ans+=y;
            y=0;
        }
        x+=y;
        ans+=min(x,c);
        co(ans)
    }
    return 0;
}