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
        ll n,k;
        cin >>n>>k;
        string s;
        cin>>s;
        vector<ll>in;
        for(int i=0;i<n;i++){
            if(s[i]=='1') in.pb(i);
        }       
        if(in.empty()){
            ll c=0;
            for(int i=0;i<n;i+=(k+1)) c++;
            co(c)
            continue;
        }
        else if(in.size()==1){
            ll c=0;
            ll d=(in[0]-0)/(k+1);
            c+=d;
            d=((n-1)-in[0])/(k+1);
            c+=d;
            co(c)
        }
        else{
            ll c=0,x=in[0];
            f(i,1,in.size()){
                ll d=(in[i]-x)/(k+1);
                if(d>0) c+=d-1;
                x=in[i];
            }
            c+=((in[0]-0)/(k+1));
            c+=(((n-1)-in.back())/(k+1));
            co(c)
        }
    }
    return 0;
}