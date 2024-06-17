#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int screen;
        if (y % 2 == 1)
            screen = (y / 2) + 1;
        else
            screen = y / 2;
        int ans = screen * 15;
        ans -= (y * 4);
        if (ans >= x)
            cout << ans << endl;
        else
        {
            x -= ans;
            int c = x / 15;
            x -= (c * 15);
            if (x > 0)
                c++;
            cout << screen + c << endl;
        }
    }

    return 0;
}
