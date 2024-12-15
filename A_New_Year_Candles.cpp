#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int h = a;
    int rem =0;
    while(a>=b)
    {
        h+=a/b;
        rem = a%b;
        a/=b;
        a+= rem;
    }
    cout<<h<<endl;
    return 0;
}