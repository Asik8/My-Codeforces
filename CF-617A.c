#include<stdio.h>
#include<math.h>

int main()
{
    int d,c=0;
    scanf("%d",&d);

    for(int i=5;i>0;i--)
    {
        if(d>=i)
        {
            int div = d/i;
            c+=div;
            d= d%i;
        }

        if(d==0)
        {
            break;
        }
    }

    printf("%d\n",c);

    return 0;
}