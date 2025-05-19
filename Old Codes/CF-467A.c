#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int l = n * 2;
    int a[l], c = 0;

    for (int i = 0; i < l; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int j=0;j<l;j+=2)
    {
        if(a[j+1]-a[j]>=2)
        {
            c++;
        }
    }

    printf("%d\n",c);

    return 0;
}