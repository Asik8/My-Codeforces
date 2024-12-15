#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string s,ans;
    cin >> s;

    if(n%2 == 0)
    {
        ans+=s[0];
        s.erase(s.begin()+0);
    }
    int i=0;
    while (i<s.size())
    {
        if (i % 2 == 0)
        {
            ans += s[i];
        }
        else
        {
            ans = s[i]+ans;
        }
        i++;
    }
    cout<<ans<< endl;
    return 0;
}