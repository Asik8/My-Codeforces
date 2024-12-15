#include <bits/stdc++.h>
using namespace std;
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

bool check(int i1,int j1,int i2,int j2)
{
    return abs(i1-i2)<=1 && abs(j1-j2)<=1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n=3;
    char c[n][n];
    string t = "CCC";
    forni{
        fornj{
            cin>>c[i][j];
        }
    }  

    for(int i1=0;i1<n;i1++)
    {
        for(int j1 = 0;j1<n;j1++)
        {
            for(int i2=0;i2<n;i2++)
            {
                for(int j2=0;j2<n;j2++)
                {
                    if((i1==i2 && j1==j2) || !check(i1,j1,i2,j2)) continue;
                    for(int i3=0;i3<n;i3++)
                    {
                        for(int j3=0;j3<n;j3++)
                        {
                            if((i3 == i2 && j3==j2) ||(i1==i3 && j1 == j3) || !check(i2,j2,i3,j3)) continue;
                            string a = {c[i1][j1],c[i2][j2],c[i3][j3]};
                            t = min(t,a);
                        }
                    }
                }
            }
        }
    }

    cout<<t<<endl; 
    return 0;
}