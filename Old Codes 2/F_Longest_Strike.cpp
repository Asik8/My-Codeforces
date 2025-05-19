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
    ll tt;
    cin >> tt;
    while (tt--) {
        ll n,k,x;
        cin >> n>>k;
        map<ll,ll>mp;
        vector <ll> v;
        forni{
            cin >>x;
            mp[x]++;
        }    
        for(auto it:mp){
            if(it.second>=k){
                v.pb(it.first);
            }
        }
        if(v.size()==0){
            co(-1)
            continue;
        }
        sort(v.begin(),v.end());
        ll l=v[0],r=v[0],len=1,s=v[0],p=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]==p+1){
                p=v[i];
                ll q=p-s+1;
                if(q>len){
                    l=s;
                    r=p;
                    len=q;
                }
            }
            else{
                s=v[i];
                p=v[i];
            }
        }
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}