#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        bool not_match = false;
        if (arr[0] % 2 == 0 && arr[1] % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (arr[i] % 2 == 1)
                {
                    not_match = true;
                    break;
                }
            }
            if (not_match == false)
            {
                for (int i = 1; i < n; i += 2)
                {
                    if (arr[i] % 2 == 1)
                    {
                        not_match = true;
                        break;
                    }
                }
            }
        }
        
        else if (arr[0] % 2 == 1 && arr[1] % 2 == 1)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (arr[i] % 2 == 0)
                {
                    not_match = true;
                    break;
                }
            }
            if (not_match == false)
            {
                for (int i = 1; i < n; i += 2)
                {
                    if (arr[i] % 2 == 0)
                    {
                        not_match = true;
                        break;
                    }
                }
            }
        }
        
        else if (arr[0] % 2 == 1 && arr[1] % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (arr[i] % 2 == 0)
                {
                    not_match = true;
                    break;
                }
            }
            if (not_match == false)
            {
                for (int i = 1; i < n; i += 2)
                {
                    if (arr[i] % 2 == 1)
                    {
                        not_match = true;
                        break;
                    }
                }
            }
        }
        
        else if (arr[0] % 2 == 0 && arr[1] % 2 == 1)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (arr[i] % 2 == 1)
                {
                    not_match = true;
                    break;
                }
            }
            if (not_match == false)
            {
                for (int i = 1; i < n; i += 2)
                {
                    if (arr[i] % 2 == 0)
                    {
                        not_match = true;
                        break;
                    }
                }
            }
        }

        if (not_match == false)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}