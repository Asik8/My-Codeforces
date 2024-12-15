#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i < n; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,q;
        cin >> n>>q;
        vector <ll> a(n);
        for (auto& x:a) cin >>x; 
        vector<int> b;      
        for (int i=0;i<q;i++) 
        {
            int x;
            cin >>x;
            if(b.empty() || b.back()>x)
                b.pb(x);
        }     
        forni{
            for(auto x:b){
                if(!(a[i]%(1<<x))){
                    x=x-1;
                    a[i]+= (1<<(x));
                }
            }
        }
        for(ll x:a) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}