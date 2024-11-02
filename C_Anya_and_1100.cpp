#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        string s;
        cin>>s;
        ll q;
        cin >> q;
        while(q--){
            int i; char v;
            cin>>i>>v;
            i--;
            if(s.size()<4) pn
            else{
                ll c=0;
                s[i] = v;
                bool f = false;
                for(int i=0;i<s.size()-3;i++){
                    if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0'&&s[i+3]=='0'){
                        f = true;
                        break;
                    }
                }
                if(f) py
                else pn
            }
        }       
    }
    return 0;
}