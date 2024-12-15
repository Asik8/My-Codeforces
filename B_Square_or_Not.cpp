#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"Yes\n";
#define pn cout<<"No\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin>>s;
        ll sz = sqrt(n);
        if((sz*sz) != n)pn
        else
        {
            ll c = sz/2;
            bool f = true;
            if(n == 4)
            {
                int co = s.find('0');
                if(co<=0) py
                else pn
            }
            else
            {
                for(int i=1;i<=c;i++)
                {
                    for(int j=((sz*i)+1);j<=(sz*i)+c;j++)
                    {
                        if(s[j] != '0')
                        {
                            f = false;
                            break;
                        }
                    }
                    if(!f) break;
                }
                if(f) py
                else pn
            }
        }       
    }
    return 0;
}