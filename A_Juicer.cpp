#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,b,d;
    cin >> n>>b>>d;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    ll squiz = 0,c=0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]<=b)
        {
            if(squiz+ar[i]<=d)
            {
                squiz+= ar[i];
            }
            else
            {
                squiz = 0;
                c++;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}