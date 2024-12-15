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
        vector <ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];   
        int c=0;   
        for (int i = n-1; i > 0; i--)
        {
            if(v[i]<=v[i-1])
            {
                while(v[i]<=v[i-1])
                {
                    if(v[i-1] == 0) break;
                    v[i-1] = v[i-1]/2;
                    c++;
                }
            }
        } 
        bool f = true;
        for (int i = 0; i < n-1; i++)
        {
            if(v[i]>=v[i+1])
            {
                f = false;
                break;
            }
        }
        if(f) cout<<c<<endl;
        else cout<<"-1\n";
    }
    return 0;
}