#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        ll z=0,o=0,ans=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i] == '0')
            {
                while(s[i]=='0') 
                {
                    z++;
                    i++;
                }
                if(o>=1) ans=ans+z*(o+1);
                z=0;
            }
            if(s[i] == '1') o++;
        }   
        cout<<ans<<endl;   
    }
    return 0;
}