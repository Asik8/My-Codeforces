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
        ll n,k;
        cin >> n>>k;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;   
        ll g=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=k) g+=v[i];
            else if(v[i]==0 && g>0)
            {
                c++;
                g--;
            }
        }    
        cout<<c<<endl;
    }
    return 0;
}