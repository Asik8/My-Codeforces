#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    vector<ll>v(1000009,0);
    for(ll i=2;i<=1000008;i++)
    {
        if(v[i] == 0)
        {
            for(ll j=i;j<=1000008;j+=i)
            {
                if(v[j]== 0) 
                {
                    v[j] = i;
                }
            }
        }
    }
    while (t--) {
        ll n,k;
        cin >> n>>k;
        ll sq = v[n];
        cout<<n+sq+(k-1)*2<<endl;
    }

    return 0;
}