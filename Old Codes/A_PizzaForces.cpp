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
        ll n;
        cin >> n;
        if(n<=10)
        {
            if(n<=6) cout<<"15\n";
            else if(n<=8) cout<<"20\n";
            else cout<<"25\n";
        }
        else 
        {
            ll ans = (n/10)*25;
            ll a = n%10;
            if(a)
            {
                if(a==1 || a==2) ans+=5;
                else if(a<5) ans+= 10;
                else if(a<=6) ans+= 15;
                else if(a<=8) ans+= 20;
                else ans+= 25;
            }
            cout<<ans<<endl;
        }    
    }

    return 0;
}