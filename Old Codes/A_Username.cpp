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
        string s;
        cin>>s;
        while(!s.empty() && s.back() == '0')
            s.pop_back();
        if(!s.empty())s.pop_back();
        cout<<s<<endl;     
    }
    return 0;
}