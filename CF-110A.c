#include<stdio.h>
#include<string.h>

int main()
{
    long long int a;
    scanf("%lld",&a);

    int c=0,c2=0,c3=0;

    while (a>0)
    {
        int len = a%10;
        if(len==4 || len == 7)
        {
            c++;
        }
        a=a/10;
    }
    
    while (c>0)
    {
        int len = c%10;
        if(len == 4 || len == 7)
        {
            c2++;
        }
        c/=10;
    }
    
    

    if(c2>0)
    {
        printf("YES\n");
    }
    else 
    printf("NO\n");

    return 0;
}