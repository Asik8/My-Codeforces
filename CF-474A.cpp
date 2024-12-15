#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    char c;
    string seq = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char se[100];
    string s;
    cin>>c>>s;
    int in=0,l=s.size();

    if(c=='R')
    {
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<30;j++)
            {
                if(s[i] == seq[j]) se[in++] = seq[j-1];
            }
        }
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<30;j++)
            {
                if(s[i] == seq[j]) se[in++] = seq[j+1];
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        cout<<se[i];
    }
    cout<<endl;

    return 0;
}