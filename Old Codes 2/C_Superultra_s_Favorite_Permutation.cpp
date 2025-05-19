#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
const ll N=2e5+20;
bool ch[N];

bool check(ll n){
    for(int i=2;i*i<=n;i++){
        if(!(n%i)){
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v;
        v.pb(1);
        ll l=3;
        while(l<=n){
            v.pb(l);
            l+=2;
        }
        l-=2;
        memset(ch,false,sizeof(ch));
        ll r=2;
        bool f=false;
        while(r<=n){
            if(check(l+r)){
                f=true;
                ch[r]=true;
                v.pb(r);
                break;
            }
            r+=2;
        }
        if(!f) cout<<"-1\n";
        else{
            r=2;
            while(r<=n){
                if(!ch[r]) v.pb(r);
                r+=2;
            }
            for(auto c:v) cout<<c<<" ";
            cout<<endl;
        }
    }
    return 0;
}