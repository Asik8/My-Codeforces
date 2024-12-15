#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s[8];
        char c = '.';
        for(int i=0;i<8;i++)
            cin>>s[i];
        
        for(int i=0;i<8;i++)
        {
            if(count(s[i].begin(),s[i].end(),'R') == 8)
            {
                c = 'R';
                break;
            }
        }

        if(c=='.')
        {
            for(int j=0;j<8;j++)
            {
                bool b = false;
                for(int i=0;i<8;i++)
                {
                    if(s[i][j] != 'B')
                    {
                        b = true;
                        break;
                    }
                    if(!b)
                    {
                        c = 'B';
                        break;
                    }
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
