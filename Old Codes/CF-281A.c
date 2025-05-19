#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000];
    scanf("%s",a);

    int i=0;

    if(a[i]>=65 && a[i]<=90)
    {
        printf("%s\n",a);
    }

    else 
    {
        a[i]=a[i]-32;
        printf("%s\n",a);
    }

    return 0;
}