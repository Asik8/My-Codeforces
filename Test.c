#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<stddef.h>
#include<assert.h>
#include<stdarg.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    // int t;
    // scanf("%d",&t);

    // while(t--)
    // {
    //     int n;
    //     scanf("%d",&n);
    //     int arr[n];
    //     for (int i = 0; i < n; i++) {
    //         scanf("%d",&arr[i]);
    //     }
    //     qsort(arr, n, sizeof(int), compare);
    // }
    lli l=1,h=11;
    lli mid = l + (h - 1) / 2;
    printf("%lld\n",mid);
    return 0;
}