#include <stdio.h>

int main()
{
    int s, n;
    scanf("%d %d",&s,&n);

    int arr[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int j = 0; j < ((n*2)-2); j+=2)
    {
        for (int i = j+2; i < (n * 2); i += 2)
        {
            if (arr[j] > arr[i])
            {
                int temp1 = arr[j];
                arr[j] = arr[i];
                arr[i] = temp1;
                int temp2 = arr[j+1];
                arr[j+1] = arr[i+1];
                arr[i+1] = temp2;
            }
        }
    }

    for (int i = 0; i < n * 2; i += 2)
    {
        if (arr[i] >= s)
        {
            printf("NO\n");
            return 0;
        }
        else
        {
            s += arr[i + 1];
        }
    }

    printf("YES\n");

    return 0;
}