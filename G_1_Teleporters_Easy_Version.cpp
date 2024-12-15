#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,co;
        cin>>n>>co;
        list <ll> l;
        for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            l.pb(x+i);
        } 
        ll c=0;
        l.sort();
        while(!l.empty() && co>0){
            if(l.front()>co) break;
            c++;
            co-=l.front();
            l.pop_front();
        }    
        cout<<c<<endl;  
    }
    return 0;
}