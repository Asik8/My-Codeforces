#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--){
        ll m;
        cin>>m;
        ll mn1=LONG_LONG_MAX,mn2= LONG_LONG_MAX;
        vector<vector<ll>> a(m);
        for(int i=0;i<m;i++){
            ll x;
            cin>>x;
            while(x--){
                ll b;
                cin>>b;
                a[i].pb(b);
            }
        }
        for(int i=0;i<m;i++){
            sort(a[i].begin(),a[i].end());
            mn2 = min(a[i][1],mn2);
            mn1 = min(a[i][0],mn1);
        }
        ll ans=0,c=0;
        for(int i=0;i<m;i++){
            if(a[i][1] == mn2 && c==0) c++;
            else ans+=a[i][1]; 
        }
        cout<<ans+mn1<<endl;
    }
    return 0;
}