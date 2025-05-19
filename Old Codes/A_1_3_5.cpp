#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if(n<3) cout<<n<<"\n";
        else if(!(n%3)) cout<<"0\n";      
        else if(!(n%5)) cout<<"0\n"; 
        else
        {
            int ans = 0;
            for(int i=0;i<=n/5;i++)
            {
                int rem = n-(5*i);
                if(!(rem%3)) 
                {
                    ans = 0;
                    break;
                }
                ans = rem%3;
            }
            int a = n%3;
            int b = n%5;
            cout<<min(ans,min(a,b))<<endl;
        }     
    }
    return 0;
}