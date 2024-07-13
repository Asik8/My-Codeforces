#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a =a % 100;
    c =c % 100;
    b =b % 100;
    d =d % 100;
    int res = a*b*c*d;
    ll x1 = res%10;
    ll x2 = res%100/10;
    cout<<x2<<x1<<endl;
    return 0;
}

