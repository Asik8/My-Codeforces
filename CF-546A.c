#include<stdio.h>
#include<math.h>

int main()
{
    int p,m,q,sum =0;
    scanf("%d %d %d",&p,&m,&q);

    for(int i=1;i<=q;i++)
    {
        int mul = p*i;
        sum +=mul;
    }
    if(sum<=m)
    {
        printf("0\n");
    }
    else
    printf("%d\n",(sum-m));
    return 0;
}