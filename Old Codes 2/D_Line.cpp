#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        string s;
        cin>>s;
        vector<ll> v;
        ll c=0,ch=0;
        for(int i=0;i<n;i++){
            ll l=i;
            ll r=n-i-1;
            if(s[i]=='L'){
                if(r>l){
                    ch++;
                    c+=r;
                    v.pb(r-l);
                }
                else c+=l;
            }
            else{
                if(r<l){
                    ch++;
                    c+=l;
                    v.pb(l-r);
                }
                else c+=r;
            }
        }   
        vector<ll>ans(n,c);
        sort(v.begin(),v.end(),greater<ll>());
        for(int i=ch-2;i>=0;i--){
            c-=v.back();
            v.pop_back();
            ans[i]=c;
        }
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}