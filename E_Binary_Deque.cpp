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
        ll n,k,s=0;
        cin >> n>>k;
        vector <ll> v(n);
        for (auto& x:v){
            cin >>x; 
            s+=x;
        }      
        if(s<k){
            cout<<"-1\n";
            continue;
        }
        ll l=0,r=0,c=0,ans=INT_MAX;
        while(r<n){
            if(v[r]==1) c++;
            while(c>k){
                if(v[l]==1) c--;
                l++;
            }
            if(c==k) ans=min(ans,n-r+l);
            r++;
        }
        cout<<ans-1<<endl;
    }
    return 0;
}