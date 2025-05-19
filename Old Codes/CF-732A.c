#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int c=1;

    while(1)
    {
        int mul = a*c;
        if(mul%10==b || mul%10==0)
        {
            break;
        }
        c++;
    }

    printf("%d\n",c);

    return 0;
}