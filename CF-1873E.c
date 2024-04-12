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

int bi_search(int ar[],int n,int x)
{
    int l=0,h=n-1,mid;
    
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int ar[n];
        for (int i = 0; i < n; i++) {
            scanf("%d",&ar[i]);
        }
        qsort(ar, n, sizeof(int), compare);
    }

    return 0;
}