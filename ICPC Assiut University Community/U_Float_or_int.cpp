#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    float n;
    cin >> n;
    int a = n;
    if(a== n) cout<<"int "<<a;
    else cout<<"float "<<a<<" "<<fixed<<setprecision(3)<<n-a<<endl;
    return 0;
}