#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    cout << t / 365 << " years\n";
    t %= 365;
    cout << t / 30 << " months\n";
    t %= 30;
    cout << t << " days\n";
    return 0;
}