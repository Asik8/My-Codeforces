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
    ll a[150000],b[150000] = {0},ans[150000]={0};
    ll n;
    cin >> n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    ans[1] = b[1];
    for(ll i=2;i<100001;i++)
    {
        ans[i] = max(ans[i-1],ans[i-2]+(i*b[i]));
    } 
    cout<<ans[100000]<<endl;
    return 0;
}