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
    int pass = 1999;
    while(1)
    {
        int n;
        scanf("%d",&n);
        if (n!=pass)
            printf("Wrong\n");
        else
        {
            printf("Correct\n");
            break;
        }
    }

    return 0;
}