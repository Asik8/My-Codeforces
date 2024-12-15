#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        int a[n][n-1];
        f(i,0,n){
            f(j,0,n-1){
                cin>>a[i][j];
            }
        }
        vector<map<ll,ll>>v(n);
        f(j,0,n-1){
            f(i,0,n){
                v[j][a[i][j]]++;
            }
        }
        vector<ll>ans(n);
        bool f[n+1];
        memset(f,false,sizeof(f));
        for(int i=n-2;i>=0;i--){
            ll mn=INT_MAX,val=0;
            for(auto x:v[i]){
                if(x.second<mn && !f[x.first]){
                    mn=x.second;
                    val=x.first;
                }
            }
            f[val]=true;
            ans[mn]=val;
        }
        f(i,1,n+1){
            if(!f[i]){
                ans[0]=i;
                break;
            }
        }
        reverse(ans.begin(),ans.end());
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}