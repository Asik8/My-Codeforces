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
        ll n,ans=INT_MAX;
        cin >> n;
        string s;
        cin>>s;
        for(int i=0;i<26;i++){
            ll l=0,r=n-1,c=0;
            while(l<=r){
                if(s[l]==s[r]){
                    l++;r--;
                }
                else if(s[l]==char('a'+i)){
                    c++;
                    l++;
                }
                else if(s[r]==char('a'+i)){
                    c++;
                    r--;
                }
                else{
                    c=INT_MAX;
                    break;
                }
            }
            ans=min(ans,c);
        }
        if(ans==INT_MAX) co(-1)
        else co(ans)
    }
    return 0;
}