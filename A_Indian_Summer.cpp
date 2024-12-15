#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    set<pair<string,string>> s;
    while (t--) {
        string s1,s2;
        cin>>s1>>s2;
        s.insert({s1,s2});  
    }
    cout<<s.size()<<endl;
    return 0;
}