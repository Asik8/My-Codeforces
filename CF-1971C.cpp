#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int m = max(a, b);
        int m2 = min(a, b);
        bool f = false;
        int count = 0;

        for (int i = m2; i < m; i++)
        {
            if (i == c || i == d)
                count++;
        }
        if (count == 0)
        {
            for (int i = m; i < m2; i++)
            {
                if (i==13)
                    i=1;
                if (i == c || i == d)
                    count++;
            }
        }

        if (count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
