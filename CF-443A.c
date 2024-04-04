#include<stdio.h>
#include<string.h>

int main()
{
    char c[1001];
    scanf("%[^\n]",c);

    int l = strlen(c);
    int a[26]={0},cont=0;

    for(int i=0;i<l;i++)
    {
        if(c[i]>='a' && c[i]<='z')
        {
            int sub =c[i]-'a';
            if(a[sub]==0)
            {
                cont++;
                a[sub]=1;
            }
        }
    }

    printf("%d\n",cont);

    return 0;
}