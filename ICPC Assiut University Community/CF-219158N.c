#include<stdio.h>   
int main()
{
    char a[1];
    scanf("%c",&a);

    if (a[0]>=97 && a[0]<=122)
        printf("%c\n",a[0]-32);
    else
        printf("%c\n",a[0]+32);
    return 0;
}