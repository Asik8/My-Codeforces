#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    ll ans = 0;
    while (1){
        for (ll i = 0; i < a.size(); i++){
            ll x = i;
            ll cnt = 0;
            for (ll j = 0; j < m && x < a.size(); j++){
                if (a[x] == b[j]){
                    x++;
                    cnt++;
                }
                else break;
            }
            if (cnt == m){
                cout << ans << endl;
                return;
            }
        }
        a += a;
        ans++;
        if (a.size() > 1000) break;
    }
    co(-1)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
} 