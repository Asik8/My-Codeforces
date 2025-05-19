#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll h,n,m;
        cin >>h>> n>>m;
        while(h>20 && n>0)
        {
            h = (h/2)+10;
            n--;
        }
        while(h>0 && m>0)
        {
            h -= 10;
            m--;
            if(h<=0) 
                break;
        }
        if(h<=0)cout<<"YES\n";
        else cout<<"NO\n";       
    }
    return 0;
}