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
        if(n==1){
            co(1)
            continue;
        }
        else if(n>1 && n<5){
            co(2)
            continue;
        }
        else{
            ll l=4,ans=2;
            while(l<n){
                l++;
                l*=2;
                ans++;
            }
            co(ans)
        }    
    }
    return 0;
}