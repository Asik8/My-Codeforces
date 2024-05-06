#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    lli n;
    scanf("%lld",&n);
    printf("%lld\n",(n*(n+1))/2);
    return 0;
}