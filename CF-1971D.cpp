#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;
        int c = 0, l = a.length();

        for (int i = 0; i < l - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                a[i] = '!';
            }
        }

        char s[l];
        int j = 0;
        for (int i = 0; i < l; i++)
        {
            if (a[i] == '0')
            {
                c++;
                s[j++] = '0';
            }
            else if (a[i] == '1')
            {
                c++;
                s[j++] = '1';
            }
        }
        if (c <= 1)
            cout << 1 << endl;
        else if (c == 2)
        {
            if (s[0] == '0')
                cout << 1 << endl;
            else
                cout << c << endl;
        }
        else
            cout<<c-1<<endl;
    }
    return 0;
}
