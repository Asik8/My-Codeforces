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
        int max_num = arr[0],max_ind = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i]>max_num)
            {
                max_num = arr[i];
                max_ind = i;
            }
        }
        int min_num = arr[0],min_ind = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i]<min_num)
            {
                min_num = arr[i];
                min_ind = i;
            }
        }

        int max = (max_ind>min_ind) ? max_ind:min_ind;
        int min = (max_ind<min_ind) ? max_ind:min_ind;

        int min_length = max+1;

        int type2_len = n-min;
        if (type2_len<min_length)
            min_length = type2_len;
        
        int type3_len = min+1+(n-max);
        if (type3_len<min_length)
            min_length = type3_len;

        printf("%d\n",min_length);

    }
    return 0;
}