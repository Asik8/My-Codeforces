#include<stdio.h>
#include<math.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    int ar[n],temp;

    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        c-=a;
        c+=b;
        ar[i]=c;
    }

    for(int j=0;j<n;j++)
    {
       for(int i=j+1;i<n;i++)
       {
         if(ar[j]<ar[i])
        {
            temp = ar[j];
            ar[j]= ar[i];
            ar[i]=temp;
        }
       }
    }

    printf("%d\n",ar[0]);
    return 0;
}