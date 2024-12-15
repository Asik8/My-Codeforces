#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;)
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
        fr(i,n-1,0){
            if(s[i]!='0'){
                int v=s[i]-'0';
                v--;
                ans.pb(char('a'+v));
                i--;
            }
            else{
                ll v=s[i-1]-'0'+(s[i-2]-'0')*10;
                v--;
                ans.pb('a'+v);
                i-=3;
            }
        }   
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;   
    }
    return 0;
}