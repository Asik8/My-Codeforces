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
        ll n,c=0,x;
        cin >> n;
        vector <ll> a,b;
        while (n--) 
        {
            cin >>x; 
            if(x%2) b.pb(x);
            else a.pb(x);
        }      
        if(a.size() == 0 || b.size()==0) cout<<0<<endl;
        else
        {
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            c = a.size();
            for(ll i:a)
            {
                if(i<b.back())b.back()+=i;
                else {
                    c++;
                    break;
                }
            }
            cout<<c<<endl;
        }
    }
    return 0;
}