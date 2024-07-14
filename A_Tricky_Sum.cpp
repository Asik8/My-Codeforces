#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,num=1,s1=0,s2=0;
        cin >> n;
        s1 = (n*(n+1))/2;
        while(num<=n)
        {
            s2+= num;
            num *= 2;
        }
        cout<<s1-s2*2<<endl;   
    }
    return 0;
}