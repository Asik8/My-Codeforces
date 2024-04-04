#include<stdio.h>
#include<string.h>
int main()
{
    int n,cont=0,sub2=0,sub1;
    scanf("%d",&n);
    int a[n],b[n];

    for(int k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    for(int l=0;l<n;l++)
    {
        scanf("%d",&b[l]);
    }

    for(int i=0;i<n;i++)
    {
        sub2=0;
            printf("sub2 and i: %d %d\n",sub2,i);
        for(int j=i;j<i+1;j++)
        {
            if(a[i]<a[j])
            {
                sub1 = a[j]-a[i];
                 printf("sub1 and j: %d %d\n",sub1,j);
                while(1)
                {
                    a[i]=a[i]-1;
                    sub2++;
                    if(sub2>sub1)
                    {
                        break;
                    }
                    if(a[i]==a[j])
                    {
                        break;
                    }
                    if(a[i]==0)
                    {
                        a[i]=9;
                    }
                }
                if(sub1<sub2)
                {
                    cont+=sub1;
                }
                else if(sub2<sub1)
                {
                    cont+=sub2;
                }
                else
                {
                    cont+=sub1;
                }
            }

            else if(a[i]>a[j])
            {
                sub1 = a[i]-a[j];
                while(1)
                {
                    a[j]=a[j]-1;
                    sub2++;
                    if(sub2>sub1)
                    {
                        break;
                    }
                    if(a[i]==a[j])
                    {
                        break;
                    }
                    if(a[j]==0)
                    {
                        a[j]=9;
                    }
                }
                if(sub1<sub2)
                {
                    cont+=sub1;
                }
                else if(sub2<sub1)
                {
                    cont+=sub2;
                }
                else
                {
                    cont+=sub1;
                }
            }
          
           
        }
    }
    printf("%d\n",cont);

    return 0;
}