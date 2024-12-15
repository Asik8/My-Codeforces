#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int ans = 1;
    for(int i=2;i<=min(a,b);i++)
        if(a%i == 0 && b%i == 0)ans = i;
    cout<<ans<<endl;
    return 0;
}