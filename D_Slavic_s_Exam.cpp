#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        string s,t;
        cin>>s>>t;
        int p = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '?')
            {
                if(p<t.size()) s[i] = t[p];
                else s[i] = 'a';
            }
            if(s[i] == t[p] && p<t.size())p++;
        }    
        if(p<t.size()) pn
        else 
        {
            py 
            cout<<s<<endl;
        }  
    }
    return 0;
}