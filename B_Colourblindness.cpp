#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        string s1,s2;
        cin>>s1>>s2;
        ll c1=0,c2=0;
        for(auto c:s1) if(c=='R') c1++;
        for(auto c:s2) if(c=='R') c2++;
        if(c1!=c2) pn
        else{
            bool f=true;
            forni{
                if(s1[i]=='R'&&s2[i]!='R'||(s2[i]=='R'&&s1[i]!='R')){
                        f=false;
                        break;
                    }
                }
            if(f) py
            else pn 
        }        
    }
    return 0;
}