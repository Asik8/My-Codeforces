#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t--)
    {
        long long int a,one=0,two=0;
        cin>>a;
        string s,f;
        cin>>s>>f;

        for(long long int i=0;i<a;i++)
        {
            if(s[i] == '1' && f[i] == '0')
                one++;
            if(f[i] == '1' && s[i] == '0')
                two++;
        }

        cout<<max(one,two)<<endl;
    }

    return 0;
}