#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        string s;
        cin>>s;
        vector<pair<ll,char>>v(26);
        for(char c:s){
            v[c-'a'].first++;
            v[c-'a'].second = c;
        }
        string ans(n,' ');
        ll in=0;
        sort(v.rbegin(),v.rend());
        for(auto x:v){
            if(x.first == 0) break;
            for(int i=0;i<x.first;i++){
                if(in>=n) in = 1;
                ans[in] = x.second;
                in+=2;
            }
        }  
        cout<<ans<<endl;
    }
    return 0;
}