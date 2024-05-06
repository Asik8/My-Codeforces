#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string c;
        cin >> c;
        int len = c.length();

        if ((c[len - 1] - '0') % 2 == 0)
        {
            cout << "0\n";
        }
        else
        {
            int ans = -1;
            for (int i = 0; i < len; i++)
            {
                if ((c[i] - '0') % 2 == 0)
                {
                    ans = i;
                    break;
                }
            }
            if(ans == -1)
                cout<<"-1\n";
            else if((c[0]-'0')%2 ==0)
                cout<<"1\n";
            else
                cout<<"2\n";
        }
    }
    return 0;
}
