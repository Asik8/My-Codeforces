#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <stddef.h>
#include <assert.h>
#include <stdarg.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int binary_search(int arr[],int n,int x)
{
    int left = 0,right = n-1,result = -1;

    while (left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] <= x)
        {
            result = mid;
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    return result;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);

    int q;
    scanf("%d",&q);
    int ar;
    for (lli i = 0; i < q; i++) {
        scanf("%d",&ar);
        int count = binary_search(arr,n,ar);
        if(count == -1)
            printf("0\n");
        else
            printf("%d\n",count+1);
    }

    return 0;
}