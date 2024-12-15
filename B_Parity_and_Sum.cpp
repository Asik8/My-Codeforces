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
        vector <ll> even,b;
        while (n--) 
        {
            cin >>x; 
            if(x%2) b.pb(x);
            else even.pb(x);
        }      
        if(even.size() == 0 || b.size()==0) cout<<0<<endl;
        else
        {
            sort(even.begin(),even.end());
            sort(b.begin(),b.end());
            c = even.size();
            for(ll i:even)
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