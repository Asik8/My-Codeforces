#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n-1; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,k;
        cin>>n>>k;
        map<ll,ll>mp;
        forni{
            ll x;
            cin>>x;
            mp[x]++;
        }
        ll ans=0;
        for(int i=0;i<=n;i++){
            if(mp[i]==0){
                ans = i;
                break;
            }
            if(mp[i]>1){
                if(i+k<=n){
                    mp[i]--;
                    mp[i+k]+=mp[i];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}