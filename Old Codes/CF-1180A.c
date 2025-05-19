#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ans = (2*pow(n,2))-2*n+1;
    printf("%d\n",ans);

    return 0;
}
