#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        if (n%7 == 0)
        {
            cout<<n<<endl;
        }
        else
        {
            int a = n%7;
            int b = 7-a;
            int c = n%10;
            if(c+b<10)
                n+=b;
            else 
                n-=a;
            cout<<n<<endl;
        }
    }
}
