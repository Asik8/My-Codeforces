#include <stdio.h>
#include <string.h>

int main()

{
    int a;
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        char c[3][3];

        for (int m = 0; m < 3; m++)
        {
            for (int n = 0; n < 3; n++)
            {
                scanf(" %c",&c[m][n]);
            }
        }

            int c1=0,c2=0,c3=0;
        for (int m = 0; m < 3; m++)
        {
            for (int n = 0; n < 3; n++)
            {
                if(c[m][n]== 'A')
                {
                    c1++;
                }
            
               else if(c[m][n]== 'B')
                {
                    c2++;
                }
            
               else if(c[m][n]== 'C')
                {
                    c3++;
                }
            }
        }

        if(c1<c2 && c1<c3)
        {
            printf("A\n");
        }

        else if(c1>c2 && c2<c3)
        {
            printf("B\n");
        }

        else if(c3<c1 && c3<c2)
        {
            printf("C\n");
        }
    }

    return 0;
}