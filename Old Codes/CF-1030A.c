#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int cont=0,i,ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(i=0;i<a;i++)
    {
        if(ar[i]==1)
        {
            cont++;
            break;
        }
    }

    if(cont==1)
    {
        printf("HARD");
    }
    else 
    {
        printf("easy");
    }
}