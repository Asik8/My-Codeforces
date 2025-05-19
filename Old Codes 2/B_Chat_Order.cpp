#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    map<string,int>mp;
    for (int i=t-1;i>=0;i--){
        string s;
        cin>>s;
        mp[s] = i;
    }
    vector<string>v(t);
    for(auto it:mp) v[it.second] = it.first;
    for(auto x:v) if(!x.empty()) cout<<x<<endl;
    return 0;
}