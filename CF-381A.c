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

    int sareja = 0,dima = 0,l=a-1,s=0,c=1;

    while(c<a+1)
    {
        if(c%2!=0)
        {
            if(ar[s]>=ar[l])
            {
                sareja += ar[s];
                s++;
            }
            else if(ar[s]<ar[l])
            {
                sareja += ar[l];
                l--;
            }
            c++;
        }

        else
        {
            if(ar[s]>=ar[l])
            {
                dima += ar[s];
                s++;
            }
            else if(ar[s]<ar[l])
            {
                dima += ar[l];
                l--;
            }
            c++;
        }
    }

    printf("%d %d\n",sareja,dima);

    return 0;
}