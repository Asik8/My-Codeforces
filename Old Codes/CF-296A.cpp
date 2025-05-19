#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin >> n;
    int x,ar[111111]={0},m=0;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        ar[x]++;
        if(ar[x]>m) m =ar[x];
    }
    if(m>(n+1)/2)puts("NO");
    else puts("YES");

    return 0;
}
