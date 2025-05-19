#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector < ll > divisors(ll n) {
    vector < ll > v;
    for(ll i = 1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            if(n/i == i) {
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    return v;
}

ll power(ll a, int b) {
    ll ans = 1;
    while (b > 0) {
        ans *= a;
        b--;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll a,b;
        ll l,comp;
        cin>>a>>b>>l;
        vector<ll> k = divisors(l);
        vector<ll> x,y;
        for(ll i = 0 ; i <= 20 ; i++) {
            comp = power(a,i);
            if(comp <= 1e6) {
                x.push_back(comp);
            }
            else 
                break;
        }
        for(ll i = 0 ; i <= 20 ; i++) {
            comp = power(b,i);
            if(comp <= 1e6) {
                y.push_back(comp);
            }
            else 
                break;
        }
        ll c=0;
        for(ll i=0;i<(ll)k.size();i++)
        {
            bool f = false;
            for(int j=0;j<(ll)x.size();j++)
            {
                for(int m=0;m<(ll)y.size();m++)
                {
                    if(l == k[i]*x[j]*y[m]) 
                    {
                        c++;
                        f = true;
                        break;
                    }
                }
                if(f) break;
            }
        }     
        cout<<c<<endl;  
    }
    return 0;
}