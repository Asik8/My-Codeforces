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
        char c[2*t];
        char ch[8] = {'a','b','c','d','e','f','g','h'};
        scanf("%s",c);
        
        for (int i = 1; i < 9; i++) {
            if (c[1] != '0'+i)
            {
                printf("%c%d\n",c[0],i);
            }
        }

        for (int i = 0; i < 8; i++) {
            if (c[0] != ch[i])
            {
                printf("%c%c\n",ch[i],c[1]);
            }
        }
    }

    return 0;
}