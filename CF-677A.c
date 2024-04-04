#include<stdio.h>
#include<math.h>

int main()
{
    int n,h,c=0;
    scanf("%d %d",&n,&h);

    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a<=h)
        {
            c++;
        }
        else
        {
            c+=2;
        }
    }

    printf("%d\n",c);
    return 0;
}