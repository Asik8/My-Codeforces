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
        cin >> n;
        string s;
        cin>>s;
        ll bc=0;
        for(char c:s) if(c == 'B') bc++;
        if(bc>0){
            if(bc==n || (s[0]=='B' && s.back() == 'B')) cout<<n<<endl;
            else {
                ll l=0,r=n-1;
                while(s[l] == 'W'){
                    if(s[l] == 'W') l++;
                }
                while(s[r] == 'W'){
                    if(s[r] == 'W') r--;
                }
                cout<<(r-l)+1<<endl;
            }
        }
        else cout<<"0\n";
    }
    return 0;
}