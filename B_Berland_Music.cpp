#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i<n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;  
        string s;
        cin>>s;
        map<ll,ll>a,b;
        forni{
            if(s[i] == '0') a[v[i]] = i;
            else b[v[i]] = i;
        }
        ll l=1;
        for(auto it:a) v[it.second]=l++;
        for(auto it:b) v[it.second]=l++;
        for(auto it:v) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}