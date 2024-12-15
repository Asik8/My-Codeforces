#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
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
        vector<ll>v;
        char c[n][4];
        forni{
            for(int j=0;j<4;j++){
                cin>>c[i][j];
            }
        }     
        forni{
            for(int j=0;j<4;j++){
                if(c[i][j] == '#') v.pb(j+1);
            }
        }     
        reverse(v.begin(),v.end());
        for(ll x:v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}