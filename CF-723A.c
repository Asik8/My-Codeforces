#include <stdio.h>

int main()
{
    int a[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int sum = ((a[1]-a[0])+(a[2]-a[1]));
    printf("%d\n",sum);

    return 0;
}