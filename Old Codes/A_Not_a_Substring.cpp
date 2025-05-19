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
        string s;
        cin>>s;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==')' && s[i+1]=='('){
                ll l=s.size();
                py
                for(int i=0;i<l;i++) cout<<'(';
                for(int i=0;i<l;i++) cout<<')';
                cout<<endl;
                break;
            }
            else if(s[i]=='(' && s[i+1]=='(' || s[i]==')' && s[i+1]==')' ){
                ll l=s.size();
                py
                for(int i=0;i<l;i++) cout<<"()";
                cout<<endl;
                break;
            }
            else if(s.size()==2 && s[i]=='(' && s[i+1]==')'){
                pn
                break;
            }
        }       
    }
    return 0;
}