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
        ll n,k;
        cin >>n>>k;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;   
        sort(v.begin(),v.end());    
        ll s=0,c=0;
        forni{
            if(((n-i)*v[i])+s>=k) break;
            else{
                s+=v[i];
                c++;
            }
        }
        cout<<k+c<<endl;
    }
    return 0;
}