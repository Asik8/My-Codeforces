#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<ll,ll>>v(20,make_pair(0,0));
    v[0].first = 5;
    v[0].second = 9;
    for(int i=1;i<18;i++)
    {
        v[i].first = (v[i-1].first)*10+5;
        v[i].second = (v[i-1].second)*10+9;
    }
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