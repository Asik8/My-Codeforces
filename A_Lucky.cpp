#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int s1=0,s2=0;
        s1+= (s[0]-'a')+(s[1]-'a')+(s[2]-'a');
        s2+= (s[3]-'a')+(s[4]-'a')+(s[5]-'a');
        if(s1 == s2) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}