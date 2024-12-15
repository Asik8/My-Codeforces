#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        string s;
        cin>>s;    
        n = s.size();
        ll ans = 0,z=0,o=0,l=0;
        for(char c:s)
        {
            if(c == '0') z++;
            else o++;
        }   
        bool f = true;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0' && o>0) o--;
            else if(s[i] == '1' && z>0) z--;
            else 
            {
                cout<<n-i<<endl;
                f = false;
                break;
            }
            l = i;
        }
        if(f) cout<<n-l-1<<endl;
    }
    return 0;
}