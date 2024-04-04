#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],c[100];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

    int l1=strlen(a);
    int l2 = strlen(b);
    int l3=strlen(c);

    if(l3>(l1+l2) || l3<(l1+l2))
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        int ch[26]={0},let[26]={0};
        for(int i=0;i<l1;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                int ind = a[i]-'A';
                ch[ind]++;
            }
        }

        for(int i=0;i<l2;i++)
        {
            if(b[i]>='A' && b[i]<='Z')
            {
                int ind = b[i]-'A';
                ch[ind]++;
            }
        }

        for(int i=0;i<l3;i++)
        {
            if(c[i]>='A' && c[i]<='Z')
            {
                int ind = c[i]-'A';
                let[ind]++;
            }
        }

        for(int i=0;i<26;i++)
        {
            if(ch[i]!=let[i])
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }

    return 0;
}