#include<stdio.h>
#include<string.h>

int main()
{
    char a;
    scanf(" %c",&a);

    if(a>=48 && a<=57)
        printf("IS DIGIT\n");
    else if(a>=65 && a<=90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }

    return 0; 
}
