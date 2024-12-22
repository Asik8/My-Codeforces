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
        vector <ll> v(n),ans;
        for (auto& x:v) cin >>x;
        if(v[n-1]==1){
            pn
            continue;
        }   
        py
        for(int i=n-1;i>=0;i--){
            if(v[i]==0){
                if(i==0 || v[i-1]==0) ans.pb(0);
                else{
                    ll c=0,tmp,in=0;
                    ll j=i-1;
                    while(j>=0 && v[j]==1){
                        c++;
                        in=j;
                        j--;
                    }
                    tmp=c;
                    while(tmp--) ans.pb(0);
                    ans.pb(c);
                    i=in+1;
                }
            }
        }
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}