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
        ll n;
        cin >> n;
        string s;
        char ch[5] = {'a','e','i','o','u'};
        int l=0;
        for(int i=0;i<n;i++)
        {
            s.pb(ch[l]);
            l++;
            if(l == 5) l = 0;
        }   
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}