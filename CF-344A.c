#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int ar[a];

    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }

    int c=0;

    for(int i=0;i<a-1;i++)
    {
        if(ar[i]==10 && ar[i+1]==01)
        {
            c++;
        }
        else if(ar[i]==01 && ar[i+1]==10)
        {
            c++;
        }
    }

    printf("%d\n",c+1);

    return 0;
}