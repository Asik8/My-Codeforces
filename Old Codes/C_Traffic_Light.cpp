#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        forni s.pb(s[i]);
        ll in=-1;
        for(int i=s.size()/2;i<s.size();i++){
            if(s[i]=='g'){
                in = i;
                break;
            }
        }
        vector<ll> v;
        for(int i=(s.size()/2)-1;i>=0;i--){
            if(s[i] == 'g') in = i;
            if(s[i] == c) v.pb(in-i);
        }
        sort(v.begin(),v.end());
        cout<<v.back()<<endl;
    }
    return 0;
}