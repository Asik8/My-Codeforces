#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int c=0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i] == '0' && s[j] == '1')
                {
                    c++;
                    s[i] = '_';
                    s[j] = '_';
                }
                else if(s[i] == '1' && s[j] == '0')
                {
                    c++;
                    s[i] = '_';
                    s[j] = '_';
                }
            }
        }
        if(c%2==1) cout<<"DA\n";
        else cout<<"NET\n";
    }

    return 0;
}