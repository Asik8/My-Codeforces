#include<stdio.h>   
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[4];
    scanf("%s",a);

    int first_num = a[0]-'0';

    if (first_num %2 ==0)
        printf("EVEN\n");
    else
        printf("ODD\n");
    return 0;
}