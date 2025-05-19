#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char ch[n];
    scanf("%s", ch);
    int counter = 0;

    for (int i = 0; i < n-1; i++)
    {
        if (ch[i] == 'x' && ch[i+1] == 'x' && ch[i+2] == 'x')
        {
            counter++;
            ch[i] = 1;
        }
    }

    printf("%d\n", counter);

    return 0;
}