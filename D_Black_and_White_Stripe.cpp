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
        ll n,k;
        cin >>n>>k;
        string s;
        cin>>s;
        ll c=0,mn=INT_MAX,l=0,r=0,wc=0;
        while(r<n){
            if(s[r]=='W') wc++;
            if(r-l+1==k){
                if(wc<mn) mn=wc;
                if(s[l]=='W') wc--;
                l++;
            }
            r++;
        }
        cout<<mn<<endl;
    }
    return 0;
}