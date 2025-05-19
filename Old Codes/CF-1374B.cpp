#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n,c=0;
        cin >> n;
        bool found = false;
        if(n==1) cout<<c<<endl;
        else if(n==2 || n==4|| n==5)cout<<-1<<endl;
        else
        {
            while (n>1)
            {
                c++;
                if(n%6==0) n/=6;
                else 
                {
                    n*=2;
                    if(n<6 || n>=1000000000)
                    {
                        found = true;
                        break;
                    }
                }
            }
        if(found == true) cout<<-1<<endl;
        else cout<<c<<endl;
        }
    }

    return 0;
}