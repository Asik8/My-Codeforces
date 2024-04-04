// t = int(input())

// for _ in range(t):
//    n = int(input())
//    l = list(map(int,input().split()))
//    l.sort(reverse=True)
//    sum = 0
//    for i in l:
//        sum += abs(i)
//    print(sum)

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for (int i=0;i<t;i++)
    {
        int n,sum = 0,a;
        scanf("%d",&n);
        for (int j=0;j<n;j++)
        {
            scanf("%d",&a);
            if (a<0)
            {
                sum -= a;
            }
            else
            {
                sum += a;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}