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
        ll n;
        cin >> n;
        string s;
        cin>>s;
        int ma = 0,c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == s[i+1]) c++;
            else
            {
                ma = max(ma,c);
                c=0;
            }
        }
        cout<<ma+2<<endl;    
    }

    return 0;
}