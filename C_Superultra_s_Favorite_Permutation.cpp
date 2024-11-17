#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

bool check(ll n){
    bool f=false;
    for(int i=2;i<=sqrt(n);i++){
        if(!(n%i)){
            f= true;
            break;
        }
    }
    return f;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(n);
        ll l=2,r=n-1;
        v[0]=1;
        v[1]=n;
        for(int i=2;i<n;i++){
            if(i%2) v[i]=r--;
            else v[i]=l++;
        }
        bool f=true;
        for(int i=0;i<n-1;i++){
            if(!(check(v[i]+v[i+1]))){
                f =false;
                break;
            }
        }
        if(!f) cout<<"-1\n";
        else{
            for(auto c:v) cout<<c<<" ";
            cout<<endl;       
        }
    }
    return 0;
}