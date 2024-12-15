#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, z = 0,o = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] =='0')z++;
        else o++;
    }

    int m = min(o,z);
    cout<<n-(m*2)<<endl;
    return 0;
}