#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long int

int main()
{
    int n, m, q;
    cin >> n >> m >> q;

    char ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ar[i][j] = '.';
        }
    }

    while (q--)
    {
        int r1, r2, c1, c2;
        char c;
        cin >> r1 >> c1 >> r2 >> c2 >> c;

        for (int i = min(r1,r2) - 1; i < max(r1,r2); i++)
        {
            for (int j = min(c1,c2) - 1; j < max(c2,c1); j++)
            {
                ar[i][j] = c;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ar[i][j];
        }
        cout << endl;
    }

    return 0;
}