#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,n,i=0;
    char ch[100];
    scanf("%d",&n);

    while (i<n)
    {
        scanf("%s",ch);
        i++;
        if(strcmp(ch,"--X")==0)
        {
            --x;
        }
        else if(strcmp(ch,"X--")==0)
        {
            x--;

        }

        else if(strcmp(ch,"X++")==0)
        {
            x++;
        }
        else 
        {
            ++x;
        }
    }
    
    printf("%d\n",x);

    return 0;
}