#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<ll> lcase,ucase;
        for (int i=0;i<s.size();i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b') lcase.pb(i);
            if(s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B') ucase.pb(i);
            if (s[i] == 'b' && !lcase.empty()) 
            {
                s[lcase.back()] = '1';
                lcase.pop_back();
            }
            if(s[i] == 'B' && !ucase.empty())
            {
                s[ucase.back()] = '1';
                ucase.pop_back();
            }
        }
        for(char c: s) if(c != 'b' && c!='B' && c!='1') cout<<c;
        cout<<endl;
    }
    return 0;
}