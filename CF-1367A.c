#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
        char a[100],b[100];
        int c=0;
        scanf("%s",b);

        int len = strlen(b);
        a[c] = b[0];
        c++;

        for(int i=1;i<len;)
        {
            if(b[i]!=b[i+1])
            {
                a[c] = b[i];
                c++;
                i++;
            }
            else if(b[i] == b[i+1])
            {
                a[c] = b[i];
                c++;
                i+=2;
            }
        }
        for(int i=0;i<c;i++)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }

    return 0;
}