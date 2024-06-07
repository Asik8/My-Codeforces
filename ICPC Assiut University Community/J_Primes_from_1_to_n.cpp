#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    for(int i=2;i<=t;i++)
    {
        bool f = true;
        for(int j=2;j<=int(sqrt(i));j++)
        {
            if(i%j == 0)
            {
                f = false;
                break;
            }
        }
        if(f) cout<<i<<" ";
    }cout<<endl;

    return 0;
}