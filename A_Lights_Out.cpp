#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int grid[5][5]={},a[5][5];

    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            cin>>a[i][j];
            grid[i][j] = 1;
        }
    }

    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            if(a[i][j] %2==1 && a[i][j]>0)
            {
                if(grid[i][j] == 1) grid[i][j] = 0;
                else grid[i][j] = 1;

                if(grid[i+1][j] == 1) grid[i+1][j] = 0;
                else grid[i+1][j] = 1;

                if(grid[i-1][j] == 1) grid[i-1][j] = 0;
                else grid[i-1][j] = 1;

                if(grid[i][j+1] == 1) grid[i][j+1] = 0;
                else grid[i][j+1] = 1;

                if(grid[i][j-1] == 1) grid[i][j-1] = 0;
                else grid[i][j-1] = 1;
            }
        }
    }
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}