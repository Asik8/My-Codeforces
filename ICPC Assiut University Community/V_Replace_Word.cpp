#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    cin>>s;
    for (int i=0;i<s.size();)
    {
        if(s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] =='T')
        {
            cout<<" ";
            i+=5;
        }
        else
        {
            cout<<s[i];
            i++;
        }
    } cout<<endl;

    return 0;
}