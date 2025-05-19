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
        string s;
        cin>>s;
        unordered_map<ll,ll>mp;
        ll c=0;
        for(auto x:s){
            mp[(x-'0')]++;
            c+=(x-'0');
        }   
        if(!(c%9)) py
        else{
            c%=9;
            c=9-c;
            ll a=mp[2];
            ll b=mp[3];
            if(c>((a*2)+(b*6))) pn
            else{
                bool f=false;
                for(int i=c;i<=((a*2)+(b*6));i+=9){
                    ll x=i,na=a,nb=b;
                    while(x>=6 && nb>0){
                        x-=6;
                        nb--;
                    }
                    while(x>=2 && na>0){
                        x-=2;
                        na--;
                    }
                    if(x==0){
                        f=true;
                        break;
                    }
                }
                if(f) py else pn
            }
        }
    }
    return 0;
}