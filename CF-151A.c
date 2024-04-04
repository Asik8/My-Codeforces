#include<stdio.h>

int main()
{
    int n,k,l,c,d,p,nl,np,a[3];
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int amount = k*l;
    a[0] = amount/nl;

    int slices = c*d;
    int salt = p/np;

    if(slices<n || salt<n)
    {
        printf("0\n");
        return 0;
    }
    else
    {
        a[1]=slices;
        a[2] = salt;

        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(a[i]>a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("%d\n",a[0]/n);
    }

    return 0;
}