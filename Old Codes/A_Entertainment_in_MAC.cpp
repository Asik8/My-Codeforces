#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s,ans;
        cin>>s;
        ans=s;
        bool f=false;
        ll l=0,r=s.size()-1;
        while(l<r){
            if(s[l]>s[r]){
                f=true;
                break;
            }
            if(s[l]==s[r]){
                l++;r--;
            }
            else break;
        }
        if(f){
            reverse(ans.begin(),ans.end());
            ans+=s;
        }      
        cout<<ans<<endl;
    }
    return 0;
}