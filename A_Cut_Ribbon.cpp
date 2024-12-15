#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,n;
    cin>>n>>a>>b>>c;
    int x,y,z,dp[n+1];
    dp[0] = 0;
    for(int i=1;i<n+1;i++)
    {
        x = INT_MIN,y = INT_MIN,z = INT_MIN;
        if(i>=a) x = dp[i-a];
        if(i>=b) y = dp[i-b];
        if(i>=c) z = dp[i-c];
        dp[i] = 1+max(x,max(y,z));
    }
    cout<<dp[n]<<endl;

    return 0;
}