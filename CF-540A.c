#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,cont=0;
    scanf("%d",&n);
    char a[n],b[n];
    scanf("%s",a);
    scanf("%s",b);

    for(int i=0;i<n;i++)
    {
        int f = a[i]-'0';
        int s = b[i]-'0';
        int d1 = abs(f-s);
        int min,max;
        if(f<s)
        {
            min = f;
            max = s;
        }
        else
        {
            min = s;
            max = f;
        }
        int d2 = (9-max)+min+1;
        if(d1<d2)
            cont+=d1;
        else
            cont+=d2;
    }
    
    printf("%d\n",cont);

    return 0;
}