#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        char d;
        cin >> n >> d;
        string s;
        cin >> s;
        int in = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] < d)
            {
                in = i;
                found = true;
                break;
            }
        }
        
        if (in == 0 && n == 1 && s[0] > d)
            in = 1;
        if (found == false || d == '0')
            in = n;

        char c[n + 1];
        int l = 0;
        for (int i = 0; i < n + 1; i++)
        {
            if (i == in)
                c[i] = d;
            else
                c[i] = s[l++];
        }
        for (int i = 0; i < n + 1; i++)
            cout << c[i];

        cout << "\n";
    }

    return 0;
}