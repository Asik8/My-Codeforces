#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n], c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] == 1)
        {
            c1++;
        }
        else if (ar[i] == 2)
        {
            c2++;
        }
        else if (ar[i] == 3)
        {
            c3++;
        }
    }

    int min = c1;
    if (c2 < min)
    {
        min = c2;
    }
    if (min > c3)
    {
        min = c3;
    }

    if (c1 == n || c2 == n || c3 == n || min == 0)
    {
        printf("0\n");
        return 0;
    }

    else
    {
        printf("%d\n", min);
        int c = 0;

        while (min > 0)
        {
            int one=0,two=0,three=0,j=0,k=0,l=0;
            for(int i=0;i<n;i++)
            {
                if(c==3)
                {
                    c=0;
                    one=0;two=0;three=0;
                    printf("\n");
                    break;
                }
                if(ar[i]==1 && j==0)
                {
                    ar[i]=0;
                    j++;
                    printf("%d ",i+1);
                    c++;
                }
                else if(ar[i]==2 && k==0)
                {
                    ar[i]=0;
                    k++;
                    printf("%d ",i+1);
                    c++;
                }
                else if(ar[i]==3 && l==0)
                {
                    ar[i]=0;
                    l++;
                    printf("%d ",i+1);
                    c++;
                }
            }
            min--;
        }
    }

    return 0;
}