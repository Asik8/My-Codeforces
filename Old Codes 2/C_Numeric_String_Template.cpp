#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> vec(n);
        map<int,vector<int>>mp;
        for (int i=0;i<n;i++) 
        {
            cin >>vec[i];
            mp[vec[i]].pb(i);
        } 
        vector<vector<int>>v;
        for(auto x:mp) v.pb(x.second);
        sort(v.begin(),v.end());
        ll m;
        cin>>m;
        while(m--)
        {
            string s;
            cin>>s;
            if(s.size()!=n)
            {
                pn
                continue;
            }
            else
            {
                map<char,vector<int>>mpp;
                for(int i=0;i<n;i++) mpp[s[i]].pb(i);
                vector<vector<int>> v1;
                for(auto x:mpp) v1.pb(x.second);
                sort(v1.begin(),v1.end());
                if(v1 == v) py
                else pn
            }
        }
    }
    return 0;
}