#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,x,y;
    cin>>t>>x>>y;
    while(t--)
    {
        ll n;
        cin>>n;
        ll t_x = (n+1)*x/(x+y)-n*x/(x+y);
        ll t_y = (n+1)*y/(x+y)-n*y/(x+y);
        if(t_x && t_y) cout<<"Both\n";
        else if(t_x) cout<<"Vanya\n";
        else if(t_y) cout<<"Vova\n";
        else cout<<"Both\n";
    }

    return 0;
}