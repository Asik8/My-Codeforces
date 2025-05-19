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
        int first=0,last =n-1,sum =0;
        for(int i=0;i<n/2;i++)
        {
            sum+=arr[last]-arr[first];
            last--;
            first++;
        }
        printf("%d\n",sum);
    }

    return 0;
}