#include<stdio.h>

int main()
{        
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int tickets = 0;
    
    if ((a*m)>=b && n>=m)
    {
        tickets = (n/m)*b;
        n= n%m;
        if (a<=b && n!=0)
            tickets += n*a;
        else if (a>b && n!=0)
            tickets += b;
    }
    else if ((a*m)<b && n>=m)
    {
        tickets = n*a;
    }
    else if (m>n && b<=a)
    {
        tickets = b;
    }

    else if (m>n && b>a)
    {
        if ((a*m)<=b)
        {
            int cost = n*a;
            if (cost<=b)
            {
            tickets = cost;
            }
            else{
                tickets = b;
            }
        }
        else if ((a*m)> b)
        {
            if (a*n>b)
                tickets = b;
            else
                tickets = a*n;
        }
    }

    printf("%d\n",tickets);

    return 0;
}