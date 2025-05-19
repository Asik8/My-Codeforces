#include<stdio.h>
#include<string.h>

int main()
{
    long long int a,te=0,cu=0,oc=0,od=0,ic=0;
    scanf("%lld",&a);

    for(long long int i=0;i<a;i++)
    {
        char c[20];
        scanf("%s",c);

        if(strcmp(c,"Tetrahedron")==0)
        {
            te++;
        }
        else if(strcmp(c,"Cube")==0)
        {
            cu++;
        }
        else if(strcmp(c,"Octahedron")==0)
        {
            oc++;
        }
        else if(strcmp(c,"Icosahedron")==0)
        {
            ic++;
        }
        else if(strcmp(c,"Dodecahedron")==0)
        {
            od++;
        }
    }

    long int sum = ((te*4)+(cu*6)+(oc*8)+(od*12)+(ic*20));
    printf("%ld\n",sum);

    return 0;
}