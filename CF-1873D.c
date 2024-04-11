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
        int n,k,count = 0;
        scanf("%d %d",&n,&k);
        char c[n];
        scanf("%s",c);

        for (int i = 0; i < n-k; i++) {
            if(c[i] == 'B')
            {
                count++;
                for(int j=i;j<i+k;j++)
                {
                    if(c[j] == 'B')
                        c[j] = 'W';
                }
            }
        }
        for (int i = n-k; i < n; i++) {
            if(c[i] == 'B')
            {
                count++;
                break;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}