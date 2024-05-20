#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<char> ar, r;
    set<char> se;

    for (auto it : s) se.insert(it);
    for (auto it : se) ar.push_back(it);
    sort(ar.begin(), ar.end());
    r = ar;
    reverse(r.begin(), r.end()); 

    map<char, char> mp;
    for (int i = 0; i < (int)ar.size(); i++) {
        mp[ar[i]] = r[i];
    }

    string ans;
    for (auto it : s) ans += mp[it]; 
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
