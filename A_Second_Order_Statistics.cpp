#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    set<ll> s;
    while(n--)
    {
        ll x;
        cin>>x;
        s.insert(x);
    }
    int i=1;
    if(s.size()==1) pn
    else
    {
        for(auto it = s.begin();it!=s.end();it++)
        {
            if(i==2)
            {
                cout<<*it<<endl;
                break;
            }
            i++;
        }
    }
    return 0;
}