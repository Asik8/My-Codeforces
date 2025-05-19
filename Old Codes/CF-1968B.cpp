#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n, m;
        cin>>n>>m;

        string c1,c2;
        cin>>c1>>c2;

        int count = 0, i = 0,j = 0;
        while (i<n && j < m)
        {
            if (c1[i] == c2[j])
            {
                count++;
                i++;
            }
            j++;
        }

        cout<<count<<endl;
    }

    return 0;
}