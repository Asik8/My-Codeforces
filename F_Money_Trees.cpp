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
        ll n,k;
        cin >> n>>k;
        vector <ll> a(n),h(n);
        for (auto& x:a) cin >>x;       
        for (auto& x:h) cin >>x;   
        ll l=0,r=0,c=0,s=0;
        while(r<n){
            s+=a[r];
            if((r+1<n) && s<=k && (h[r]%h[r+1]==0)){
                c=max(c,r-l+1);
                r++;
            }
            else{
                if(r+1<n && (h[r]%h[r+1]!=0)){
                    if(s<=k) c=max(c,r-l+1);
                    r++;
                    l=r;
                    s=0;
                }
                else{
                    if(s<=k) c=max(c,r-l+1);
                    s-=a[l];
                    l++;
                    r++;
                }
            }
        }    
        cout<<c<<endl;
    }
    return 0;
}