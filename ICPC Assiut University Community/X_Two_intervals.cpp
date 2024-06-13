#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    if((x>=a && x<=b) || (y>=a && y<=b) || (a>=x && a<=y) || (b>=x && b<= y)) cout<<max(a,x)<<" "<<min(b,y)<<endl;
    else cout<<"-1\n";
    return 0;
} 