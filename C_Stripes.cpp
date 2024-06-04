#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char a[8][8], ans;
        int r = 0, b = 0;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'B')
                    b++;
                else if (a[i][j] == 'R')
                    r++;
            }
        }
        if (r > b)
            cout << 'R' << endl;
        else if (b > r)
            cout << 'B' << endl;
        else
        {
            bool b_f = false, r_f = false;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (a[i][j] == 'R')
                    {
                        if(a[i][j+1] == 'R')
                        {
                            for(int l = j;l<8;l++)
                            {
                                
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}