#include<stdio.h>
#include<string.h>

int main()
{
    long long int t;
    scanf("%lld",&t);

    for(long long int i=0;i<t;i++)
    {
        long long int a;
        scanf("%lld",&a);

        char s[a],f[a];
        scanf("%s",s);
        scanf("%s",f);

        if(a==1)
        {
            printf("0\n");
            continue;
        }

        long long int c=0;

        for(long long int k=0;k<a;k++)
        {
            if(s[k]=='1' && f[k]=='0')
            {
                if(s[k+1]=='0' && f[k+1]=='1')
                {
                    c++;
                    s[k]=0;
                }
            
               else if(s[k+1]=='0' && f[k+1]=='0' || s[k+1]=='1' && f[k+1]=='1')
                {
                    c++;
                    s[k]=0;
                }
                // printf("c=%lld k=%lld s[k]=%c f[k]=%c\n",c,k,s[k],f[k]);
            }

            else if(s[k]=='0' && f[k]=='1')
            {
                if(k!=(a-1) && s[k+1]=='0' && f[k+1] == '1')
                {
                    c++;
                }
            
                else if(k!=(a-1) && s[k+1]=='0' && f[k+1] == '0')
                {
                    c++;
                }
            
                else if(k!=(a-1) && s[k+1]=='1' && f[k+1] == '1')
                {
                    c++;
                }
                else if(k==(a-1) && s[k]=='0' && f[k]=='1')
                {
                    c++;
                }
            }
        }

        printf("%lld\n",c);
    }

    return 0;
}