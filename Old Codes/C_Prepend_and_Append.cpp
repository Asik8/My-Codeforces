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
        string s;
        cin>>s;
        ll l=0,r=n-1,c=0;
        while(l<r){
            if((s[l]=='1' && s[r]=='0') || (s[l]=='0' && s[r]=='1')){
                c++;
                l++;
                r--;
            }
            else break;
        }    
        cout<<n-(c*2)<<endl;  
    }
    return 0;
}