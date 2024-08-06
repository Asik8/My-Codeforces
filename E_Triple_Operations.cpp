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
        ll l,r,c=0;
        cin >> l>>r;
        vector <ll> v;
        for (int i=l;i<=r;i++) v.pb(i);    
        while(v[0] >0)
        {
            v[1]*=3;
            c++;
            v[0]/=3;
        }   
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0)
            {
                c+= static_cast<ll>(floor(log10(v[i]) / log10(3)));
            }
        }
        cout<<c<<endl;
    }

    return 0;
}

