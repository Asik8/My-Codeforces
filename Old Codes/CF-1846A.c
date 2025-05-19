#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ar[n*2];
        for (int i = 0; i < n*2; i++) {
            scanf("%d",&ar[i]);
        }
        int count = 0;
        for(int i=1;i<n*2;i+=2)
        {
            if(ar[i]<ar[i-1])
                count++;
        }
        printf("%d\n",count);
    }

    return 0;
}