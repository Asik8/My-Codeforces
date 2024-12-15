#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i < n; i++)

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
        set<char>st;
        for(auto c:s) st.insert(c);
        string s1,s2;
        for(auto it= st.begin();it!=st.end();it++)s1.pb(*it);
        s2 = s1;
        reverse(s2.begin(),s2.end());
        map<char,char>mp;
        for(int i=0;i<s1.size();i++) mp[s1[i]] =s2[i];
        for(auto c:s)cout<<mp[c];
        cout<<endl;
    }
    return 0;
}