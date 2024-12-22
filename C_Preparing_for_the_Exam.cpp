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
        ll n,m,k;
        string s;
        cin>>n>>m>>k;
        vector <ll> a(m),b(k);
        map<ll,ll>mp1,mp2,mp3;
        for (auto& x:a){
            cin >>x;
            mp1[x]++;
        }
        for (auto& x:b){
            cin >>x;
            mp2[x]++;
        }
        for(int i=1;i<=n;i++){
            mp3[i]++;
        }
        if(n>k && n>m){
            f(i,0,m) cout<<0;
            cout<<endl;
            continue;
        }
        ll l=0;
        forni{
            if(mp1[i+1]>0 && mp2[i+1]==0) l++;
            if(mp1[i+1]==0 && mp2[i+1]>0) l++;
        }      
        if(l>1){
            f(i,0,m) cout<<0;
            cout<<endl;
            continue;
        }
        else if(l==0){
            f(i,0,m) cout<<1;
            cout<<endl;
            continue;
        }
        else{
            ll mis;
            for(int i=0;i<m;i++){
                if(mp2[a[i]]==0){
                    mis=a[i];
                    break;
                }
            }
            forni{
                ll x=i+1;
                if(x!=mis) s+='0';
                else s+='1';
            }
            co(s)
        }
    }
    return 0;
}