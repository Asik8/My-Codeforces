#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,q=0;
        cin>>n;

        string c;
        cin>>c;

        for(int i=0;i<n;i++)
        {
            if(c[i] == 'Q')
                q++;
            else
                q--;
            if(q<0)
                q=0;
        }

        if(q<=0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}