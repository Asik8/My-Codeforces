#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }

        int ar[2*n], l = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1] && arr[i]>9)
            {
                int temp = arr[i];
                int s = temp % 10;
                temp /= 10;
                ar[l++] = temp;
                ar[l++] = s;
            }
            else
                ar[l++] = arr[i];
        }
        ar[l++] = arr[n-1];

        // for (int i = 0; i < l; i++)
        // {
        //     printf("%d ",ar[i]);
        // } printf("\n");

        bool f = false;
        for (int i = 0; i < l-1; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                f = true;
                break;
            }
        }
        if (f == true)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}

