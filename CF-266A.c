#include<stdio.h>
#include<string.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);

    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
    }

    printf("%d\n",c);

    return 0;
}