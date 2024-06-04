#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin >> n;
    bool f = false;
    for (int i = 2; i <= int(sqrt(n)); i++)
    {
        if (n % i == 0)
        {
            f = true;
        }
    }
    if (f)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}