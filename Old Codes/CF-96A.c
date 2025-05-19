#include<stdio.h>
#include<math.h>

int main()
{
    char a[101];
    scanf("%s",a);
    
    int c1=0,c2=0;

    int len = strlen(a);

    for(int i=0;i<len;i++)
    {
        if(a[i]=='0')
        {
            c1++;
            c2=0;
            // printf("%d - c1=%d c2=%d\n",i,c1,c2);
            if(c1==7)
            break;
        }
        else if(a[i]=='1')
        {
            c2++;
            c1=0;
            // printf("%d - c1=%d c2=%d\n",i,c1,c2);
            if(c2==7)
            break;
        }
    }

    if(c1==7 || c2==7)
    {
        printf("YES\n");
    }

    else 
    printf("NO\n");

    return 0;
}