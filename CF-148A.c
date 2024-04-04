#include<stdio.h>

int main()
{
    long long int k,l,m,n,d,c=0;
    scanf("%lld %lld %lld %lld %lld",&k,&l,&m,&n,&d);

     long long int ar[d];
     for(long long int i=0;i<d;i++)
     {
        ar[i]=(i+1);
     }

     for(long long int i=0;i<d;)
     {
        // printf("k=%lld i=%lld:\n",k,i);
        if(ar[i]!=0 && ar[i]%k==0)
        {
            c++;
            // printf("Before: ar[i]=%lld c=%lld i=%lld   ",ar[i],c,i);
            ar[i]=0;
            i+=k;
            // printf("After: ar[i]=%lld c=%lld i=%lld\n",ar[i],c,i);
            // printf("\n");
        }
        else{
            i++;
        }
     }

     if(c==d)
     {
        printf("%lld\n",c);
        return 0;
     }

     for(long long int i=0;i<d;)
     {
        // printf("k=%lld i=%lld:\n",l,i);
        if(ar[i]!=0 && ar[i]%l==0)
        {
            c++;
            // printf("Before: ar[i]=%lld c=%lld i=%lld   ",ar[i],c,i);
            ar[i]=0;
            i+=l;
            // printf("After: ar[i]=%lld c=%lld i=%lld\n",ar[i],c,i);
            // printf("\n");
        }
        else{
            i++;
        }
     }

     if(c==d)
     {
        printf("%lld\n",c);
        return 0;
     }

     for(long long int i=0;i<d;)
     {
        // printf("k=%lld i=%lld:\n",m,i);
        if(ar[i]!=0 && ar[i]%m==0)
        {
            c++;
            // printf("Before: ar[i]=%lld c=%lld i=%lld   ",ar[i],c,i);
            ar[i]=0;
            i+=m;
            // printf("After: ar[i]=%lld c=%lld i=%lld\n",ar[i],c,i);
            // printf("\n");
        }
        else{
            i++;
        }
     }
     
     if(c==d)
     {
        printf("%lld\n",c);
        return 0;
     }

     for(long long int i=0;i<d;)
     {
        // printf("k=%lld i=%lld:\n",n,i);
        if(ar[i]!=0 && ar[i]%n==0)
        {
            c++;
            // printf("Before: ar[i]=%lld c=%lld i=%lld   ",ar[i],c,i);
            ar[i]=0;
            i+=n;
            // printf("After: ar[i]=%lld c=%lld i=%lld\n",ar[i],c,i);
            // printf("\n");
        }
        else{
            i++;
        }
     }
     
    printf("%lld\n",c);

    return 0;
}