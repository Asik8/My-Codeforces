#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int size = m*n;

    int ans = size/2;
    printf("%d\n",ans);

    return 0;
}