#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<ll,int>dp;
    ll n,x,curr,ans = 0;
    cin >> n;
    vector <ll> v;
    ll ar[n];
    for (int i=0;i<n;i++) 
    {
        cin >>x;  
        ar[i] = x;
        dp[x] = max(dp[x],dp[x-1]+1); 
        if(dp[x] > ans)
        {
            ans = dp[x];
            curr = x;
        }
    }    
    cout<<ans<<endl;
    for(int i=n-1;i>=0;i--)
    {
        if(ar[i] == curr)
        {
            curr--;
            v.pb(i);
        }
    }
    for(int i=v.size()-1;i>=0;i--) cout<<v[i]+1<<" ";
    cout<<endl;
    return 0;
}