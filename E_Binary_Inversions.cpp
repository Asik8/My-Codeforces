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

ll count(vector<int>v){
    ll z=0,o=0,mx=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) mx+=o;
        else if(v[i]==1)o++;
    }
    return mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <int> v(n);
        for (auto& x:v)cin>>x;
        ll ans=0;
        ans=max(ans,count(v));
        forni{
            if(v[i]==0){
                v[i]=1;
                ans=max(ans,count(v));
                v[i]=0;
                break;
            }
        }
        fr(i,n-1,0){
            if(v[i]==1){
                v[i]=0;
                ans=max(ans,count(v));
                v[i]=1;
                break;
            }
        }
        co(ans)
    }
    return 0;
}