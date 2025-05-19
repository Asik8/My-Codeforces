#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s[2];
        cin>>s[0]>>s[1];
        int c=0;
        for(int i=0;i<2;i++)     
        {
            for(int j=1;j<n-1;j++)
            {
                bool f = (s[i][j] == '.' && s[i][j-1] == '.' && s[i][j+1] == '.');
                f &= (s[!i][j] == '.' && s[!i][j-1] == 'x' && s[!i][j+1] == 'x');
                c+= f;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}