#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);

        char c[a+1];
        scanf("%s",c);

        int c1=0,c2=0;

        for(int j=0;j<a;j++)
        {
            if(c[j]=='+')
        {
            c1++;
        }
        else if(c[j]=='-')
        {
            c2++;
        }
        }

        int ans;

    if(c1>c2)
    {
        ans = c1-c2;
    }
    else if(c2>c1)
    {
        ans = c2-c1;
    }

    else{
        ans = c1-c2;
    }

    printf("%d\n",ans);
    }

    return 0;
}