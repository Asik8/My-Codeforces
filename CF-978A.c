#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a], uni_arr[a], count = 0;
    // 0 == false and 1 == True
    int duplicate = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < a; i++)
    {
        if (i == 1)
        {
            uni_arr[count] = arr[i];
            count++;
        }
        else
        {
            for (int j = 0; j < count; j++)
            {
                if (uni_arr[j] == arr[i])
                {
                    duplicate = 1;
                }
            }
            if (duplicate == 0)
            {
                uni_arr[count] = arr[i];
                count++;
            }
            duplicate = 0;
        }
    }

    if (count > 1)
    {
        printf("%d\n",count);
        for (int i = 0; i < count - 2; i++)
        {
            printf("%d ", uni_arr[i]);
        }
        printf("%d ", uni_arr[count - 1]);
        printf("%d\n", uni_arr[count - 2]);
    }
    else
    {
        printf("%d\n",count);
        printf("%d\n", uni_arr[count - 1]);
    }

    return 0;
}