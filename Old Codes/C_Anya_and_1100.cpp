#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

bool valid(const string &s,ll i){
    return i>=0 && i+3<s.size() && s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        string s;
        cin>>s;
        ll q,c=0;
        for(int i=0;i<s.size()-3;i++) if(valid(s,i))c++;
        cin >> q;
        while(q--){
            int i; char v;
            cin>>i>>v;
            i--;
            for(int j=i-3;j<=i;j++) if(valid(s,j)) c--;
            s[i]=v;
            for(int j=i-3;j<=i;j++) if(valid(s,j)) c++;
            if(c) py else pn
        }       
    }
    return 0;
}