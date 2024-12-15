#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char ar[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j=0;j<8;j++)
            {
                scanf(" %c",&ar[i][j]);
            }
        }
    
        for (int i = 0; i < 8; i++) {
            int count = 0;
            for (int j=0;j<8;j++)
            {
                if(ar[i][j] == '#' && ar[i][j+2]=='#' && ar[i+1][j+1] == '#')
                {
                    printf("%d %d\n",i+2,j+2);
                    count ++;
                    break;
                }
            }
            if(count >0)
            {
            break;
            }
        }
    }

    return 0;
}