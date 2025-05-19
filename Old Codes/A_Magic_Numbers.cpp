#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    string s;
    cin >> s;
    ll l = s.size(), one = 0, one_four = 0,one_four_four=0;
    for (ll i = 0; i < l; )
    {
        if (s[i] == '1' && s[i+1]!='4')
        {
            one++;
            i++;
        }
        else if (s[i] == '1' && s[i+1]=='4' && s[i+2]!='4')
        {
            one_four++;
            i+=2;
        }
        else if (s[i] == '1' && s[i+1]=='4' && s[i+2]=='4' && s[i+3]!='4')
        {
            one_four_four++;
            i+=3;
        }
        else i++;
    }
    // ll c= one+(one_four*2)+(one_four_four*3);
    if(one+(one_four*2)+(one_four_four*3) == l) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}