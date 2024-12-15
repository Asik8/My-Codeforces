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
        char a[101],b;
        scanf("%s %c",a,&b);
        int cont =0;
        for(int i=0;i<strlen(a);i++)
        {
            if (a[i] == b && i%2 ==0)
            {
                printf("YES\n");
                cont =1;
                break;
            }
        }
        if(cont == 0)
            printf("NO\n");
    }

    return 0;
}