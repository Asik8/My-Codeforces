#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,c=0;
    cin >> n;
    while(n>0)
    {
        if(n%2) c++;
        n/=2;
    }
    cout<<c<<endl;
    return 0;
}