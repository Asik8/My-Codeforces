#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    map<string,int>mp;
    forni{
        string s;
        cin>>s;
        if(mp[s]>0) py
        else pn
        mp[s]++;
    }        
    return 0;
}