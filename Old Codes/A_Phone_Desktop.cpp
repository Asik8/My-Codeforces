#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x,y;
        cin >> x>>y;
        int c=0;
        if(y%2==1) c+=(y+1)/2;
        else c+=y/2;
        int rem = 15*c-(4*y);
        if(x>rem)
        {
            x-=rem;
            c+=x/15;
            if(x%15>0)c++;
        }
        cout<<c<<endl;
    }

    return 0;
}