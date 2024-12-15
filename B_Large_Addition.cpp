#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if(s.back() == '9' || s[0] != '1') cout<<"NO\n";
        else
        {
            bool f = true;
            for(int i=1;i<s.size()-1;i++)
            {
                if(s[i] == '0') 
                {
                    f = false;
                    break;
                }
            }
            if(f) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}