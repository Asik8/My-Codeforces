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
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
        }
        qsort(arr, n, sizeof(int), compare);

        lli ar[10001] = {0};
        for (int i = 0; i < n; i++) {
            ar[arr[i]] =1;
        }

        int count =0;
        for (int i = 0; i < 10001; i++) {
            if(ar[i]>0)
                count++;
        }
        if(count%2 != n%2)
            printf("%d\n",count-1);
        else
            printf("%d\n",count);

    }

    return 0;
}