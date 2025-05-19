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
        ll n;
        cin >> n;
        string s;
        cin>>s;
        map<int,int>mp;
        mp[0]++;
        ll ans= 0,c=0;
        for(int i=0;i<n;i++)
        {
            c+=s[i]-'0';
            ans+= mp[c-(i+1)];
            mp[c-(i+1)]++;
        }      
        cout<<ans<<endl;
    }
    return 0;
}