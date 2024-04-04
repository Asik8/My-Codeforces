#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);

    for (int w = 0; w < t; w++)
    {
        int n;
        cin >> n;
        int a[n];
        string b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }

        char ar[2];
        ar[0]= '0';
        ar[1] = '0';
        ar[1] = '\0';
        int cont = 0;
        int arr[4],l=0;

        for (long long int e = 0; e < n; e++)
        {
            // scanf("%lld",&m[e]);
            // scanf("%s",s);

            // printf("Printing: %lld %s\n",m[e],s);
            // printf("a = %c %c\n",a[0],a[1]);

            if(b[0]=='1' && b[1]=='1')
            {
                arr[l] = a[e];
                l++;
            }

            else if(b[0]=='1' && b[1]=='0')
            {
                if(a[0]=='0')
                {
                    cont+=a[e];
                    a[0]='1';
                }
            }

            else if(b[0]=='0' && b[1]=='1')
            {
                if(a[1]=='0')
                {
                    cont+=a[e];
                    a[1]='1';
                }
            }           
        }

        int cont1 = 0;

        for (int i = 0; i < 2; i++)
        {
            if (a[i] == '1')
            {
                cont1 += 1;
            }
        }
        if (cont1 == 2 && l>0)
        {
            arr[l]=cont;
            for(int i=0;i<l-1;i++)
            {
                for(int j=i+1;j<l;j++)
                {
                    if(arr[i]>arr[j])
                    {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            printf("%d\n",arr[0]);
        }

        else if(cont<2 && l>0)
        {
            for(int i=0;i<l-1;i++)
            {
                for(int j=i+1;j<l;j++)
                {
                    if(arr[i]>arr[j])
                    {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            printf("%d\n",arr[0]);
        }
                
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}