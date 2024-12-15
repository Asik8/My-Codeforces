#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);
        char c[n];
        scanf("%s",c);
        int cnt[68] = {0};

        for(int i=0;i<n-1;i++)
        {
            if(c[i] == 'a' && c[i+1] == 'a')
                cnt[0]=1;
            else if(c[i] == 'b' && c[i+1] == 'b')
                cnt[1]=1;
            else if(c[i] == 'c' && c[i+1] == 'c')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'd' && c[i+1] == 'd')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'e' && c[i+1] == 'e')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'f' && c[i+1] == 'f')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'g' && c[i+1] == 'g')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'h' && c[i+1] == 'h')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'i' && c[i+1] == 'i')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'j' && c[i+1] == 'j')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'k' && c[i+1] == 'k')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'l' && c[i+1] == 'l')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'm' && c[i+1] == 'm')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'n' && c[i+1] == 'n')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'o' && c[i+1] == 'o')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'p' && c[i+1] == 'p')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'q' && c[i+1] == 'q')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'r' && c[i+1] == 'r')
                cnt[c[i]-'a']=1;
            else if(c[i] == 's' && c[i+1] == 's')
                cnt[c[i]-'a']=1;
            else if(c[i] == 't' && c[i+1] == 't')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'u' && c[i+1] == 'u')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'v' && c[i+1] == 'v')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'w' && c[i+1] == 'w')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'x' && c[i+1] == 'x')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'y' && c[i+1] == 'y')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'z' && c[i+1] == 'z')
                cnt[c[i]-'a']=1;
            else if(c[i] == 'a' && c[i+1] == 'b')
                cnt[26]=1;
            else if(c[i] == 'a' && c[i+1] == 'c')
                cnt[27]=1;
            else if(c[i] == 'a' && c[i+1] == 'd')
                cnt[28]=1;
            else if(c[i] == 'a' && c[i+1] == 'e')
                cnt[29]=1;
            else if(c[i] == 'a' && c[i+1] == 'f')
                cnt[30]=1;
            else if(c[i] == 'a' && c[i+1] == 'g')
                cnt[31]=1;
            else if(c[i] == 'b' && c[i+1] == 'a')
                cnt[32]=1;
            else if(c[i] == 'c' && c[i+1] == 'a')
                cnt[33]=1;
            else if(c[i] == 'd' && c[i+1] == 'a')
                cnt[34]=1;
            else if(c[i] == 'e' && c[i+1] == 'a')
                cnt[35]=1;
            else if(c[i] == 'f' && c[i+1] == 'a')
                cnt[36]=1;
            else if(c[i] == 'g' && c[i+1] == 'a')
                cnt[37]=1;
            else if(c[i] == 'b' && c[i+1] == 'c')
                cnt[38]=1;
            else if(c[i] == 'b' && c[i+1] == 'd')
                cnt[39]=1;
            else if(c[i] == 'b' && c[i+1] == 'e')
                cnt[40]=1;
            else if(c[i] == 'b' && c[i+1] == 'f')
                cnt[41]=1;
            else if(c[i] == 'b' && c[i+1] == 'g')
                cnt[42]=1;
            else if(c[i] == 'c' && c[i+1] == 'b')
                cnt[43]=1;
            else if(c[i] == 'd' && c[i+1] == 'b')
                cnt[44]=1;
            else if(c[i] == 'e' && c[i+1] == 'b')
                cnt[45]=1;
            else if(c[i] == 'f' && c[i+1] == 'b')
                cnt[46]=1;
            else if(c[i] == 'g' && c[i+1] == 'b')
                cnt[47]=1;
            else if(c[i] == 'c' && c[i+1] == 'd')
                cnt[48]=1;
            else if(c[i] == 'c' && c[i+1] == 'e')
                cnt[49]=1;
            else if(c[i] == 'c' && c[i+1] == 'f')
                cnt[50]=1;
            else if(c[i] == 'c' && c[i+1] == 'g')
                cnt[51]=1;
            else if(c[i] == 'd' && c[i+1] == 'c')
                cnt[52]=1;
            else if(c[i] == 'e' && c[i+1] == 'c')
                cnt[53]=1;
            else if(c[i] == 'f' && c[i+1] == 'c')
                cnt[54]=1;
            else if(c[i] == 'g' && c[i+1] == 'c')
                cnt[55]=1;
            else if(c[i] == 'd' && c[i+1] == 'e')
                cnt[56]=1;
            else if(c[i] == 'd' && c[i+1] == 'f')
                cnt[57]=1;
            else if(c[i] == 'd' && c[i+1] == 'g')
                cnt[58]=1;
            else if(c[i] == 'e' && c[i+1] == 'd')
                cnt[59]=1;
            else if(c[i] == 'f' && c[i+1] == 'd')
                cnt[60]=1;
            else if(c[i] == 'g' && c[i+1] == 'd')
                cnt[61]=1;
            else if(c[i] == 'e' && c[i+1] == 'f')
                cnt[62]=1;
            else if(c[i] == 'e' && c[i+1] == 'g')
                cnt[63]=1;
            else if(c[i] == 'f' && c[i+1] == 'e')
                cnt[64]=1;
            else if(c[i] == 'g' && c[i+1] == 'e')
                cnt[65]=1;
            else if(c[i] == 'f' && c[i+1] == 'g')
                cnt[66]=1;
            else if(c[i] == 'g' && c[i+1] == 'f')
                cnt[67]=1;
        }

        int count = 0;
        for(int i=0;i<=68;i++)
        {
            if(cnt[i]==1)
                count++;
        }

        printf("%d\n",count);
    }

    return 0;
}