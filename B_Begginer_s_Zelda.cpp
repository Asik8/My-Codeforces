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
        map<ll,ll>mp;
        int l = n;
        l--;
        while(l--)
        {
            int a,b;
            cin>>a>>b;
            mp[a]++;
            mp[b]++;
        }  
        int c=0;     
        for(auto it:mp) if(it.second == 1) c++;
        cout<<(c+1)/2<<endl; 
    }
    return 0;
}