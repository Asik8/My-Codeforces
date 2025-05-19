#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n, m,s=0;
    cin >> n >> m;
    for(int i=1;i*m<=n;i++)n++;
    cout<<n<<endl;
    return 0;
}