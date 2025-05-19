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
        cin>>n>>k;
        string s;
        cin>>s;
        ll c=0;
        for(int i=0;i<n-k;i++){
            if(s[i]=='B'){
                c++;
                for(int j=i;j<i+k;j++)
                    s[j]='W';
            }
        }
        for(int i=n-k;i<n;i++){
            if(s[i]=='B'){
                c++;
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}