#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,k,q;
        cin>>n>>k>>q;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;  
        ll c=0,ans=0;
        for(int i=0;i<n;i++){
            if(v[i]<=q) c++;
            else c = 0;
            if(c>=k) ans+=(c-k+1);
        }    
        cout<<ans<<endl;
    }
    return 0;
}