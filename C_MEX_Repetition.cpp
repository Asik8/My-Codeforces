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
        ll n,k,x;
        cin>>n>>k;
        vector<ll>v,a;
        forni{
            cin>>x;
            v.pb(x);
        }    
        a=v;
        sort(a.begin(),a.end());
        ll m=n;
        forni{
            if(a[i]!=i){
                m=i;
                break;
            }
        }   
        forni{
            ll tmp=v[i];
            v[i]=m;
            m=tmp;
        }
        v.pb(m);
        ll l=(k-1)%(n+1);
        for(int i=(n+1-l);i<=n;i++) cout<<v[i]<<" ";
        for(int i=0;i<(n-l);i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}