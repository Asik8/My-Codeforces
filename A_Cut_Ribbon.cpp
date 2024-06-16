#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,n;
    cin>>n>>a>>b>>c;
    if(a+b ==n || a+c == n || b+c == n) cout<<2<<endl;
    else if(a+b+c == n) cout<<3<<endl;
    else
    {
        
    }

    return 0;
}