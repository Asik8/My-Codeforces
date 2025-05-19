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
        int n=s.size();
        vector<int>v;
        forni v.pb(s[i]-'0');
        for(int i=0;i<n;i++){
            ll in=i;
            ll mx=v[i];
            for(int j=i+1;j<=min(n-1,i+12);j++){
                ll x=v[j]-(j-i);
                if(x>=0 && x>mx){
                    mx=x;
                    in=j;
                }
            }
            while(in>i){
                v[in]--;
                swap(v[in],v[in-1]);
                in--;
            }
        }
        for(auto x:v) cout<<x;
        cout<<endl;
    }
    return 0;
}