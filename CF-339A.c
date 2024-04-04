#include <stdio.h>
#include <string.h>
int main()
{

    char n[101];
    scanf("%s",n);
    int l = strlen(n);
    char temp;

    for (int i=0;i<l;i+=2)
    {
        for(int j=i+2;j<l;j+=2)
        {
            if(n[i]>n[j])
            {
                temp = n[i];
                n[i]=n[j];
                n[j]=temp;
            }
        }
    }

    for(int k=0;k<l;k++)
    {
        printf("%c",n[k]);
    }
    return 0;
}