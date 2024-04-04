#include <stdio.h>
#include<stdlib.h>

int main()
{
    long long int n, l;
    scanf("%lld %lld", &n, &l);

    long long int ar[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    double max_distance = 0;

    double first_dis = abs(0-ar[0]);
    if (first_dis > max_distance)
        {
            max_distance = first_dis;
        }
    double last_dis = abs(l-ar[n-1]);
    if (last_dis > max_distance)
        {
            max_distance = last_dis;
        }

    for (int i = 0; i < n - 1; i++)
    {
        double dis = abs(ar[i] - ar[i + 1]);
        double div = dis / 2;
        if (div > max_distance)
        {
            max_distance = div;
        }
    }

    printf("%f\n", max_distance);
    return 0;
}