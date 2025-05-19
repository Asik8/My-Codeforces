#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin >> n;
    string s,a;
    cin>>s;
    int c=0,m=0;
    for(int i=0;i<n-1;i++)
    {
        int c=0;
        for(int j=0;j<n-1;j++)
        {
            if (s[i] == s[j] && s[i+1] == s[j+1])
            {
                c++;
                if (c>m)
                {
                    m = c;
                    a = string(1,s[i])+string(1,s[i+1]);
                }
            }
        }
    }
    cout<<a<<endl;
    return 0;
}